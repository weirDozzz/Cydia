/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <MobileBackup/XXUnknownSuperclass.h>
#import <MobileBackup/MobileBackup-Structs.h>

@class NSDate, NSError;

@interface MBStateInfo : XXUnknownSuperclass {
	int _state;	// 4 = 0x4
	float _progress;	// 8 = 0x8
	unsigned _estimatedTimeRemaining;	// 12 = 0xc
	NSError *_error;	// 16 = 0x10
	NSDate *_date;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) int state;	// G=0x125f5; @synthesize=_state
@property(readonly, assign, nonatomic) float progress;	// G=0x125e5; @synthesize=_progress
@property(readonly, assign, nonatomic) unsigned estimatedTimeRemaining;	// G=0x125d5; @synthesize=_estimatedTimeRemaining
@property(readonly, assign, nonatomic) NSError *error;	// G=0x125c5; @synthesize=_error
@property(readonly, assign, nonatomic) NSDate *date;	// G=0x125b5; @synthesize=_date
- (id)initWithState:(int)state progress:(float)progress estimatedTimeRemaining:(unsigned)remaining error:(id)error;	// 0x12605
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation;	// 0x12b81
- (id)initWithCoder:(id)coder;	// 0x12a89
- (void)encodeWithCoder:(id)coder;	// 0x129dd
- (id)copyWithZone:(NSZone *)zone;	// 0x12955
- (void)dealloc;	// 0x128f5
- (void)setState:(int)state;	// 0x12585
- (void)setProgress:(float)progress;	// 0x12595
- (void)setEstimatedTimeRemaining:(unsigned)remaining;	// 0x125a5
- (void)setError:(id)error;	// 0x128cd
- (id)dictionaryRepresentation;	// 0x1277d
- (id)description;	// 0x126c5
// declared property getter: - (id)date;	// 0x125b5
// declared property getter: - (id)error;	// 0x125c5
// declared property getter: - (unsigned)estimatedTimeRemaining;	// 0x125d5
// declared property getter: - (float)progress;	// 0x125e5
// declared property getter: - (int)state;	// 0x125f5
@end