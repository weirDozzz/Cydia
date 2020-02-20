/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

#import <iAdCore/XXUnknownSuperclass.h>
#import <iAdCore/CLLocationManagerDelegate.h>

@class CLLocationManager, CLLocation;

@interface _ADRequestLocationManager : XXUnknownSuperclass <CLLocationManagerDelegate> {
@private
	CLLocationManager *_locationManager;	// 4 = 0x4
	CLLocation *_location;	// 8 = 0x8
}
@property(retain, nonatomic) CLLocation *location;	// G=0xc4c1; S=0xc671; @synthesize=_location
@property(retain, nonatomic) CLLocationManager *locationManager;	// G=0xc63d; S=0xc64d; @synthesize=_locationManager
+ (id)sharedManager;	// 0xc3c1
// declared property setter: - (void)setLocation:(id)location;	// 0xc671
// declared property setter: - (void)setLocationManager:(id)manager;	// 0xc64d
// declared property getter: - (id)locationManager;	// 0xc63d
- (void)locationManager:(id)manager didUpdateToLocation:(id)location fromLocation:(id)location3;	// 0xc59d
// declared property getter: - (id)location;	// 0xc4c1
- (id)init;	// 0xc409
@end