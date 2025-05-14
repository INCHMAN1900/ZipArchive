#import "ZipArchiveEntry.h"

@implementation ZipArchiveEntry

- (instancetype)initWithPath:(NSString *)path
                        size:(unsigned long long)size
                  attributes:(NSDictionary<NSString *, id> *)attributes
{
    self = [super init];
    if (self) {
        _path = [path copy];
        _size = size;
        _attributes = [attributes copy] ?: @{};
    }
    return self;
}

@end
