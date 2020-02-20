/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <MIME/XXUnknownSuperclass.h>

@class NSString;

@interface MFMimeCharset : XXUnknownSuperclass {
	unsigned _encoding;	// 4 = 0x4
	NSString *_primaryLanguage;	// 8 = 0x8
	NSString *_charsetName;	// 12 = 0xc
	unsigned _coversLargeUnicodeSubset : 1;	// 16 = 0x10
	unsigned _useBase64InHeaders : 1;	// 16 = 0x10
	unsigned _canBeUsedForOutgoingMessages : 1;	// 16 = 0x10
}
@property(readonly, retain) NSString *primaryLanguage;	// G=0x7b1d; converted property
@property(readonly, retain) NSString *charsetName;	// G=0x843d; converted property
+ (id)allMimeCharsets:(BOOL)charsets;	// 0x7c91
+ (id)allMimeCharsets;	// 0x7c7d
+ (id)charsetForEncoding:(unsigned long)encoding;	// 0x7c1d
+ (id)preferredMimeCharset;	// 0x7bd5
- (id)initWithEncoding:(unsigned long)encoding;	// 0x84a1
- (void)_setPrimaryLanguage:(id)language;	// 0x7b2d
- (void)dealloc;	// 0x7b75
- (unsigned long)encoding;	// 0x7ad1
// converted property getter: - (id)charsetName;	// 0x843d
- (BOOL)canBeUsedForOutgoingMessages;	// 0x7ae1
- (BOOL)coversLargeUnicodeSubset;	// 0x7af5
- (BOOL)useBase64InHeaders;	// 0x7b09
- (id)displayName;	// 0x83f9
// converted property getter: - (id)primaryLanguage;	// 0x7b1d
- (id)description;	// 0x835d
@end