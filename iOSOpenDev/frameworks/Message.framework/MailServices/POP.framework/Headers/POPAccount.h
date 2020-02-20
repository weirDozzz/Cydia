/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/POP.framework/POP
 */



@class NSConditionLock, NSArray, MFLock, MFPOP3Connection, NSString, ActivityMonitor;

@interface POPAccount : NSObject {
	ActivityMonitor *_fetchMonitor;	// 100 = 0x64
	MFPOP3Connection *_connection;	// 104 = 0x68
	NSConditionLock *_sharedConnectionCondition;	// 108 = 0x6c
	unsigned _connectionsInUse;	// 112 = 0x70
	NSArray *_currentUIDs;	// 116 = 0x74
	MFLock *_connectionActivityLock;	// 120 = 0x78
	float _connectionTimeout;	// 124 = 0x7c
	BOOL _fetcherNeedsReset;	// 128 = 0x80
	BOOL _deletingMessages;	// 129 = 0x81
	BOOL _hasDoneBackgroundSynchronization;	// 130 = 0x82
	BOOL _shouldAttemptAPOP;	// 131 = 0x83
	NSString *_oldestMessageUID;	// 132 = 0x84
	NSString *_newestMessageUID;	// 136 = 0x88
	int _numberOfKnownUIDs;	// 140 = 0x8c
}
@property(assign) int bigMessageWarningSize;	// G=0x6e59; S=0x6df9; converted property
@property(assign) BOOL shouldAttemptAPOP;	// G=0x60d9; S=0x60e9; converted property
@property(assign) int messageDeletionPolicy;	// G=0x6c11; S=0x6d45; converted property
@property(assign) unsigned delayedMessageDeletionInterval;	// G=0x6bc9; S=0x6ce5; converted property
@property(retain) id oldestKnownMessageUID;	// G=0x6a65; S=0x6ae5; converted property
@property(retain) id newestKnownMessageUID;	// G=0x6a2d; S=0x6a9d; converted property
@property(assign) int numberOfKnownUIDs;	// G=0x612d; S=0x611d; converted property
@property(readonly, assign) unsigned connectionsInUse;	// G=0x613d; converted property
@property(readonly, assign) BOOL deletingMessages;	// G=0x60f9; converted property
+ (id)accountTypeString;	// 0x6061
+ (void *)keychainProtocol;	// 0x606d
+ (id)saslProfileName;	// 0x60b5
- (id)initWithLibrary:(id)library properties:(id)properties;	// 0x7391
- (void)dealloc;	// 0x72e1
- (void)finalize;	// 0x6155
- (int)fetchNumNewMessages:(unsigned)messages oldMessages:(unsigned)messages2 preservingUID:(id)uid withStore:(id)store;	// 0x711d
- (void)releaseAllConnections;	// 0x70dd
- (void)releaseAllForcedConnections;	// 0x7079
- (id)certUIService;	// 0x607d
- (BOOL)canGoOffline;	// 0x608d
- (void)setIsOffline:(BOOL)offline;	// 0x6fed
- (unsigned)defaultPortNumber;	// 0x6091
- (unsigned)defaultSecurePortNumber;	// 0x6095
- (id)serviceName;	// 0x609d
- (id)secureServiceName;	// 0x60a9
- (BOOL)requiresAuthentication;	// 0x60c1
- (Class)storeClass;	// 0x6fd1
- (Class)storeClassForMailbox:(id)mailbox;	// 0x6f81
- (Class)connectionClass;	// 0x6f35
- (void)setPreferredAuthScheme:(id)scheme;	// 0x6ebd
- (id)mailboxPathExtension;	// 0x60c5
- (BOOL)canCreateNewMailboxes;	// 0x60d1
- (BOOL)canMailboxBeRenamed:(id)renamed;	// 0x60d5
// converted property getter: - (int)bigMessageWarningSize;	// 0x6e59
// converted property setter: - (void)setBigMessageWarningSize:(int)size;	// 0x6df9
// converted property getter: - (BOOL)shouldAttemptAPOP;	// 0x60d9
// converted property setter: - (void)setShouldAttemptAPOP:(BOOL)attemptAPOP;	// 0x60e9
// converted property setter: - (void)setMessageDeletionPolicy:(int)policy;	// 0x6d45
// converted property setter: - (void)setDelayedMessageDeletionInterval:(unsigned)interval;	// 0x6ce5
// converted property getter: - (int)messageDeletionPolicy;	// 0x6c11
// converted property getter: - (unsigned)delayedMessageDeletionInterval;	// 0x6bc9
// converted property getter: - (BOOL)deletingMessages;	// 0x60f9
- (void)deleteMessagesNow:(id)now;	// 0x6109
- (void)deleteSeenMessagesNow;	// 0x610d
- (void)insertInMailboxes:(id)mailboxes atIndex:(unsigned)index;	// 0x6b6d
- (void)acquireConnectionActivityLock;	// 0x6b4d
- (void)relinquishConnectionActivityLock;	// 0x6b2d
- (id)_URLScheme;	// 0x6111
// converted property setter: - (void)setOldestKnownMessageUID:(id)uid;	// 0x6ae5
// converted property setter: - (void)setNewestKnownMessageUID:(id)uid;	// 0x6a9d
// converted property getter: - (id)oldestKnownMessageUID;	// 0x6a65
// converted property getter: - (id)newestKnownMessageUID;	// 0x6a2d
// converted property setter: - (void)setNumberOfKnownUIDs:(int)knownUIDs;	// 0x611d
// converted property getter: - (int)numberOfKnownUIDs;	// 0x612d
- (void)_deleteHook;	// 0x6931
// converted property getter: - (unsigned)connectionsInUse;	// 0x613d
- (id)_getCachedConnection;	// 0x688d
- (id)_createNewConnection;	// 0x6801
- (id)authenticatedConnection;	// 0x6705
- (void)checkInConnection:(id)connection currentUIDs:(id)uids;	// 0x656d
- (void)scheduleDisconnect;	// 0x6501
- (void)closeConnection:(id)connection andSaveUIDs:(id)uids;	// 0x633d
- (void)closeCachedConnectionForcedOnly:(id)only;	// 0x61a5
- (void)closeCachedConnection;	// 0x6191
- (id)loginName;	// 0x6181
- (BOOL)shouldRestoreMessagesAfterFailedDelete;	// 0x614d
- (BOOL)shouldFetchBodiesWhenMovingToTrash;	// 0x6151
@end