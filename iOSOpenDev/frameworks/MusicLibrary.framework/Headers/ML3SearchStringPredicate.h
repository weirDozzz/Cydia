/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/ML3Predicate.h>

@class NSString, NSArray;

@interface ML3SearchStringPredicate : ML3Predicate {
@private
	NSArray *_properties;	// 4 = 0x4
	NSString *_searchString;	// 8 = 0x8
}
@property(copy, nonatomic) NSString *searchString;	// G=0x2dded; S=0x2ddfd; @synthesize=_searchString
@property(copy, nonatomic) NSArray *properties;	// G=0x2ddb9; S=0x2ddc9; @synthesize=_properties
+ (id)predicateWithConcatenatedProperties:(id)concatenatedProperties searchString:(id)string;	// 0x2dab1
// declared property setter: - (void)setSearchString:(id)string;	// 0x2ddfd
// declared property getter: - (id)searchString;	// 0x2dded
// declared property setter: - (void)setProperties:(id)properties;	// 0x2ddc9
// declared property getter: - (id)properties;	// 0x2ddb9
- (void)bindToSqlite3Statement:(sqlite3_stmt *)sqlite3Statement bindingIndex:(inout int *)index;	// 0x2dd71
- (void)appendSQLToMutableString:(id)mutableString entityClass:(Class)aClass;	// 0x2dbed
- (id)SQLJoinClausesForClass:(Class)aClass;	// 0x2db01
- (id)description;	// 0x2da11
- (unsigned)hash;	// 0x2d9c5
- (BOOL)isEqual:(id)equal;	// 0x2d8e1
- (void)encodeWithCoder:(id)coder;	// 0x2d859
- (id)initWithCoder:(id)coder;	// 0x2d7cd
- (void)dealloc;	// 0x2d775
- (id)initWithConcatenatedProperties:(id)concatenatedProperties searchString:(id)string;	// 0x2d715
@end