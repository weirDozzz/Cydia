/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SUGradient;

@interface SUScriptGradient : SUScriptObject {
	SUGradient *_nativeGradient;	// 36 = 0x24
}
@property(readonly, assign) NSString *type;	// G=0x752d1; 
+ (id)webScriptNameForSelector:(SEL)selector;	// 0x7538d
+ (id)webScriptNameForKey:(const char *)key;	// 0x75339
- (id)scriptAttributeKeys;	// 0x753f5
- (id)attributeKeys;	// 0x753e5
// declared property getter: - (id)type;	// 0x752d1
- (id)_className;	// 0x752c5
- (void)addColorStopWithOffset:(float)offset color:(id)color;	// 0x75145
- (id)copyNativeGradient;	// 0x750e5
- (void)dealloc;	// 0x75099
- (id)initWithGradient:(id)gradient;	// 0x75045
- (id)initRadialGraidentWithX0:(float)x0 y0:(float)a0 r0:(float)a03 x1:(float)a1 y1:(float)a15 r1:(float)a16;	// 0x74fa1
- (id)initLinearGradientWithX0:(float)x0 y0:(float)a0 x1:(float)a1 y1:(float)a14;	// 0x74f01
- (id)init;	// 0x74eed
@end