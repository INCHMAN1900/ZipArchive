#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, ZipArchiveEntryType) {
    ZipArchiveEntryTypeFile,
    ZipArchiveEntryTypeDirectory,
    ZipArchiveEntryTypeSymlink
};

@interface ZipArchiveEntry : NSObject

@property (nonatomic, copy, readonly) NSString *path;
@property (nonatomic, assign, readonly) unsigned long long size;
@property (nonatomic, copy, readonly) NSDictionary<NSString *, id> *attributes;
@property (nonatomic, assign, readonly) ZipArchiveEntryType type;

- (instancetype)initWithPath:(NSString *)path
                        size:(unsigned long long)size
                  attributes:(NSDictionary<NSString *, id> *)attributes
                        type:(ZipArchiveEntryType)type;

@end

NS_ASSUME_NONNULL_END
