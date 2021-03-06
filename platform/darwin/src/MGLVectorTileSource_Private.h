#import "MGLVectorTileSource.h"

NS_ASSUME_NONNULL_BEGIN

@interface MGLVectorTileSource (Private)

@property (nonatomic, readonly, getter=isMapboxStreets) BOOL mapboxStreets;

+ (NSSet<NSString *> *)mapboxStreetsLanguages;

+ (nullable NSString *)preferredMapboxStreetsLanguage;
+ (nullable NSString *)preferredMapboxStreetsLanguageForPreferences:(NSArray<NSString *> *)preferencesArray;

- (NSDictionary<NSString *, NSString *> *)localizedKeysByKeyForPreferredLanguage:(nullable NSString *)preferredLanguage;

@end

NS_ASSUME_NONNULL_END
