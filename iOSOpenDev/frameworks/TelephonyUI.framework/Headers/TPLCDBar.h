/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <TelephonyUI/XXUnknownSuperclass.h>

@class UIImage;

@interface TPLCDBar : XXUnknownSuperclass {
	UIImage *_barBackground;	// 52 = 0x34
}
@property(retain, nonatomic) UIImage *barBackground;	// G=0xd67d; S=0xd7bd; @synthesize=_barBackground
+ (void)preloadImages;	// 0xd6b5
+ (id)backgroundImage;	// 0xd785
+ (float)defaultHeight;	// 0xd6c5
+ (float)defaultHeightForOrientation:(int)orientation;	// 0xd6d9
- (id)initWithDefaultSizeForOrientation:(int)orientation;	// 0xd9a1
- (id)initWithDefaultSize;	// 0xd68d
- (id)initWithFrame:(CGRect)frame;	// 0xd929
- (void)dealloc;	// 0xd739
- (void)setOrientation:(int)orientation updateFrame:(BOOL)frame;	// 0xd86d
- (void)setOrientation:(int)orientation;	// 0xd6a1
- (CGRect)contentStretchRect;	// 0xd7e5
// declared property getter: - (id)barBackground;	// 0xd67d
// declared property setter: - (void)setBarBackground:(id)background;	// 0xd7bd
@end