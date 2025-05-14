#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZipArchiveEntry : NSObject

@property (nonatomic, copy, readonly) NSString *path;
@property (nonatomic, assign, readonly) unsigned long long size;
@property (nonatomic, copy, readonly) NSDictionary<NSString *, id> *attributes;

- (instancetype)initWithPath:(NSString *)path
                        size:(unsigned long long)size
                  attributes:(NSDictionary<NSString *, id> *)attributes;

@end

NS_ASSUME_NONNULL_END
