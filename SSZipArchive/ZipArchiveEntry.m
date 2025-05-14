#import "ZipArchiveEntry.h"

@implementation ZipArchiveEntry

- (instancetype)initWithPath:(NSString *)path
                        size:(unsigned long long)size
                  attributes:(NSDictionary<NSString *, id> *)attributes
                        type:(ZipArchiveEntryType)type
{
    self = [super init];
    if (self) {
        _path = [path copy];
        _size = size;
        _attributes = [attributes copy] ?: @{};
        _type = type;
    }
    return self;
}

@end
