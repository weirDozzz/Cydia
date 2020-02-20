/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <AirPortAssistant/NetTopoObjectLayer.h>

@class CAShapeLayer;

__attribute__((visibility("hidden")))
@interface NetTopoDeviceConnectionLayer : NetTopoObjectLayer {
	CAShapeLayer *_connectionLineLayer;	// 248 = 0xf8
	CGPathRef _hitTestPath;	// 252 = 0xfc
	CGColorRef _lineColorEthernet;	// 256 = 0x100
	CGColorRef _lineColorWiFi;	// 260 = 0x104
	CGColorRef _selectedLineColor;	// 264 = 0x108
	CGColorRef _clearColor;	// 268 = 0x10c
	CGColorRef _whiteColor;	// 272 = 0x110
	unsigned _upstreamDeviceSpatialRelationship;	// 276 = 0x114
	unsigned _connectionStyle;	// 280 = 0x118
	CGPoint _upstreamConnectionPoint;	// 284 = 0x11c
	CGPoint _downstreamConnectionPoint;	// 292 = 0x124
	unsigned _upstreamConnectionSide;	// 300 = 0x12c
	CGPoint _siblingMergePoint;	// 304 = 0x130
	unsigned _connectionMediumFallback;	// 312 = 0x138
	CGPathRef _arrowhead;	// 316 = 0x13c
}
@property(readonly, assign) CGPathRef hitTestPath;	// G=0x89c7d; @synthesize=_hitTestPath
@property(assign, nonatomic) CGPoint siblingMergePoint;	// G=0x88c01; S=0x88c55; 
@property(assign, nonatomic) unsigned upstreamConnectionSide;	// G=0x89c3d; S=0x89c4d; @synthesize=_upstreamConnectionSide
@property(assign, nonatomic) CGPoint downstreamConnectionPoint;	// G=0x88b05; S=0x88ab1; 
@property(assign, nonatomic) CGPoint upstreamConnectionPoint;	// G=0x88bad; S=0x88b59; 
@property(assign, nonatomic) unsigned connectionMediumFallback;	// G=0x89c5d; S=0x89c6d; @synthesize=_connectionMediumFallback
@property(readonly, assign, nonatomic) unsigned connectionMedium;	// G=0x88d39; 
@property(assign, nonatomic) unsigned connectionStyle;	// G=0x89c1d; S=0x89c2d; @synthesize=_connectionStyle
@property(assign, nonatomic) unsigned upstreamDeviceSpatialRelationship;	// G=0x89bfd; S=0x89c0d; @synthesize=_upstreamDeviceSpatialRelationship
@property(assign, getter=isSelected) BOOL selected;	// G=0x88d29; S=0x88ca9; converted property
// declared property getter: - (CGPathRef)hitTestPath;	// 0x89c7d
// declared property setter: - (void)setConnectionMediumFallback:(unsigned)fallback;	// 0x89c6d
// declared property getter: - (unsigned)connectionMediumFallback;	// 0x89c5d
// declared property setter: - (void)setUpstreamConnectionSide:(unsigned)side;	// 0x89c4d
// declared property getter: - (unsigned)upstreamConnectionSide;	// 0x89c3d
// declared property setter: - (void)setConnectionStyle:(unsigned)style;	// 0x89c2d
// declared property getter: - (unsigned)connectionStyle;	// 0x89c1d
// declared property setter: - (void)setUpstreamDeviceSpatialRelationship:(unsigned)relationship;	// 0x89c0d
// declared property getter: - (unsigned)upstreamDeviceSpatialRelationship;	// 0x89bfd
- (id)debugDescription;	// 0x89bb1
- (id)describeOne:(id)one uiLayer:(id)layer indent:(unsigned)indent;	// 0x89ae9
- (void)setNeedsDisplay;	// 0x89aa9
- (void)drawLayer:(id)layer inContext:(CGContextRef)context;	// 0x89769
- (CGPathRef)newConnectionPathWithOffset:(float)offset;	// 0x8938d
- (void)addCurvedArrowConnectionToPath:(CGPathRef)path withOffset:(float)offset;	// 0x89229
- (void)addBottomWindingConnectionToPath:(CGPathRef)path withOffset:(float)offset;	// 0x8906d
- (void)addSideWindingConnectionToPath:(CGPathRef)path withOffset:(float)offset;	// 0x88e09
- (void)layoutSublayers;	// 0x88d75
// declared property getter: - (unsigned)connectionMedium;	// 0x88d39
// converted property getter: - (BOOL)isSelected;	// 0x88d29
// converted property setter: - (void)setSelected:(BOOL)selected;	// 0x88ca9
// declared property setter: - (void)setSiblingMergePoint:(CGPoint)point;	// 0x88c55
// declared property getter: - (CGPoint)siblingMergePoint;	// 0x88c01
// declared property getter: - (CGPoint)upstreamConnectionPoint;	// 0x88bad
// declared property setter: - (void)setUpstreamConnectionPoint:(CGPoint)point;	// 0x88b59
// declared property getter: - (CGPoint)downstreamConnectionPoint;	// 0x88b05
// declared property setter: - (void)setDownstreamConnectionPoint:(CGPoint)point;	// 0x88ab1
- (CGRect)getUserInteractionBounds;	// 0x88a8d
- (void)dealloc;	// 0x889c1
- (id)init;	// 0x88851
@end