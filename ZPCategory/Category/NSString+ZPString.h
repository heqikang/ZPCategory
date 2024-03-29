//
//  NSString+ZPString.h
//  ZPCategory
//
//  Created by 张鹏 on 2019/4/1.
//  Copyright © 2019 c4ibD3. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface NSString (ZPString)

#pragma mark - 字符串宽度&&高度
/**
 *  获取字符串的实际宽度
 *
 *  @param font   字体
 *  @param height 高度
 *
 *  @return 实际宽度
 */
- (float)widthWithFont:(UIFont *)font height:(float)height;

/**
 *  获取字符串的实际高度
 *
 *  @param font  字体
 *  @param width 宽度
 *
 *  @return 实际高度
 */
- (float)heightWithFont:(UIFont *)font width:(float)width;
/**
 *  获取字符串的实际高度
 *
 *  @param font        字体
 *  @param width       宽度
 *  @param lineSpacing 行间距
 *
 *  @return 实际高度
 */
- (float)heightWithFont:(UIFont *)font width:(float)width lineSpacing:(float)lineSpacing;
/**
 *  返回字体的实际大小
 *
 *  @param font  字体大小
 *  @param width 限制宽度
 *
 *  @return 实际大小
 */
- (CGSize)sizeWithFont:(UIFont *)font width:(float)width lineSpacing:(float)lineSpacing;

#pragma mark - 字符串 正则表达式
/**
 *  判断电话号码是否正确
 *
 *  @return YES:是 NO：否
 */
- (BOOL)isValidateMobile;
/**
 *  判断是否固定电话
 *
 *  @return YES：是 NO：否
 */
- (BOOL)isValidatePhone;
/**
 *  判断是否是400客服电话
 *
 *  @return YES：是 NO：否
 */
- (BOOL)is400Phone;
/**
 *  检查输入字符串是否是身份证号
 *
 *  @return YES：是 NO：否
 */
- (BOOL)isIdCard;
#pragma mark - 数据类型的判断
/**
 *  是否正整数
 *
 *  @return YES：是 NO：否
 */
- (BOOL)isPositiveInteger;
/**
 *  是否浮点数
 *
 */
- (BOOL)isFloat;
/**
 *  检查输入字符串是否只由英文字母和数字组成
 *
 *  @return YES：是 NO：否
 */
- (BOOL)isNumberOrLetter;

/**
 *  检查输入字符串是否只由汉字和英文字母组成
 *
 *  @return YES：是 NO：否
 */
- (BOOL)isChineseOrLetter;

/**
 *  是否为空字符串
 *
 *  @return YES：是 NO：否
 */
- (BOOL)isBlankString;
#pragma mark - NSString->NSAttributedString
/**
 *  转成NSAttributedString
 *
 *  @param lineSpacing 行间距
 *
 *  @return NSAttributedString
 */
- (NSAttributedString *)toAttributeStringWithLineSpacing:(float)lineSpacing;
#pragma mark - NSString 计算字节长度
/**
 计算字符串的字节长度
 * 中文 = 2
 * 英文或者数字 = 1
 * 表情 = 4
 
 @return NSUInteger
 */
- (NSUInteger)charactorNumber;

/**
 根据不同的编码方式计算字节长度
 
 @param encoding 编码方式
 @return NSUInteger
 */
- (NSUInteger)charactorNumberWithEncoding:(NSStringEncoding)encoding;

/**
 calulate the number of charactor.
 1 Chinese(not including Chinese mark) = 2
 1 other charactor = 1
 
 @return NSUInteger
 */
- (NSUInteger)charactorNumberForChineseSpecial;

#pragma mark - 字符串加密
/**
 *  MD5加密
 *
 *  @return 加密后字符串
 */
- (NSString *)md5;
/**
 *  SHA1加密
 *
 *  @return 加密后字符串
 */
- (NSString *)SHA1;
#pragma mark - 字符串过滤
/**
 *  @brief  去除两端空格和回车
 *
 *  @return 去除后的字符串
 */
- (NSString *)trim;

/**
 *  @brief  仅去除两端空格
 *
 *  @return 去除后的字符串
 */
- (NSString *)trimOnlyWhitespace;
/**
 *  去除html格式
 *
 *  @param html html文字
 *
 */
+ (NSString *)filterHtml:(NSString *)html;

#pragma mark - 根据图片名字返回图片
- (UIImage *)toImage;

@end

NS_ASSUME_NONNULL_END
