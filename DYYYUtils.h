#import <UIKit/UIKit.h>
#import <Photos/Photos.h>

NS_ASSUME_NONNULL_BEGIN

@class YYAnimatedImageView;

@interface DYYYUtils : NSObject

/**
 * 获取当前显示的顶层视图控制器
 * @return 顶层视图控制器
 */
+ (UIViewController *)topView;

/**
 * 获取当前活动窗口
 */
+ (UIWindow *)getActiveWindow;

/**
 * 获取当前顶层控制器
 */
+ (UIViewController *)getActiveTopController;

/**
 * 应用颜色到 label
 */
+ (void)applyColorSettingsToLabel:(UILabel *)label;

/**
 * 根据颜色字符串配置，返回一个用于计算文本颜色方案的Block。
 * 支持的颜色配置字符串:
 * - "random_rainbow" 或 "#random_rainbow": 返回一个随机三色渐变方案（每次调用colorSchemeBlockWithHexString时随机）。
 * - "rainbow" 或 "#rainbow": 返回一个固定彩虹七色渐变方案。
 * - "random" 或 "#random": 返回一个单色随机颜色（每次调用colorSchemeBlockWithHexString时随机）。
 * - "HEX1,HEX2,..." 或 "#HEX1,#HEX2,...": 返回一个多色渐变方案，支持任意数量的十六进制颜色。
 * - "HEX" 或 "#HEX": 返回一个单色方案。
 * @param hexString 颜色配置字符串。
 * @return 一个Block，该Block接收0.0到1.0的进度值，返回对应的UIColor。
 */
+ (UIColor *(^)(CGFloat progress))colorSchemeBlockWithHexString:(NSString *)hexString;

/**
 * 根据十六进制字符串创建颜色对象
 * @param hexString 十六进制颜色字符串
 */
+ (UIColor *)colorWithHexString:(NSString *)hexString;

/**
 * 显示提示信息
 * @param text 要显示的文本
 */
+ (void)showToast:(NSString *)text;

/**
 * 检查当前是否为暗黑模式
 */
+ (BOOL)isDarkMode;

/**
 * 递归统计目录大小
 */
+ (unsigned long long)directorySizeAtPath:(NSString *)directoryPath;
/**
 * 递归删除目录下所有内容
 */
+ (void)removeAllContentsAtPath:(NSString *)directoryPath;

@end

#ifdef __cplusplus
extern "C" {
#endif

/**
 * 清除分享URL中的查询参数
 * @param url 需要清理的URL字符串
 * @return 清理后的URL字符串
 */
NSString * _Nullable cleanShareURL(NSString * _Nullable url);

/**
 * 获取当前显示的顶层视图控制器
 * @return 顶层视图控制器
 */
UIViewController * _Nullable topView(void);

#ifdef __cplusplus
}
#endif

NS_ASSUME_NONNULL_END
