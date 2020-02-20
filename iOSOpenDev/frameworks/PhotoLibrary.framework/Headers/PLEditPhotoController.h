/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/UIScrollViewDelegate.h>
#import <PhotoLibrary/UIAlertViewDelegate.h>
#import <PhotoLibrary/UIActionSheetDelegate.h>
#import <PhotoLibrary/UIPopoverControllerDelegate.h>
#import <PhotoLibrary/PLImageAdjustmentViewDelegate.h>
#import <PhotoLibrary/XXUnknownSuperclass.h>

@class UIToolbar, UIActionSheet, UIAlertView, UIProgressHUD, UIPopoverController, NSTimer, NSArray, UILabel, PLImageAdjustmentView, PLManagedAsset, UIImage, NSDictionary, NSMutableArray, UINavigationBar, NSUndoManager, UIScrollView, CIFilter, UIView;

@interface PLEditPhotoController : XXUnknownSuperclass <PLImageAdjustmentViewDelegate, UIScrollViewDelegate, UIActionSheetDelegate, UIAlertViewDelegate, UIPopoverControllerDelegate> {
	UIScrollView *_scrollView;	// 152 = 0x98
	UIView *_zoomView;	// 156 = 0x9c
	PLImageAdjustmentView *_editView;	// 160 = 0xa0
	UILabel *_messageView;	// 164 = 0xa4
	UINavigationBar *_navigationBar;	// 168 = 0xa8
	UIToolbar *_toolbar;	// 172 = 0xac
	UIProgressHUD *_savingHUD;	// 176 = 0xb0
	UIActionSheet *_actionSheet;	// 180 = 0xb4
	UIAlertView *_alertView;	// 184 = 0xb8
	UIPopoverController *_popover;	// 188 = 0xbc
	int _initialOrientation;	// 192 = 0xc0
	NSDictionary *_initialAdjustmentState;	// 196 = 0xc4
	NSUndoManager *_undoManager;	// 200 = 0xc8
	NSDictionary *_previousAdjustmentState;	// 204 = 0xcc
	NSUndoManager *_previousUndoManager;	// 208 = 0xd0
	NSTimer *_messageTimer;	// 212 = 0xd4
	NSMutableArray *_navBarItems;	// 216 = 0xd8
	NSArray *_originalItems;	// 220 = 0xdc
	PLManagedAsset *_editedPhoto;	// 224 = 0xe0
	PLManagedAsset *_pendingPhoto;	// 228 = 0xe4
	UIImage *_adjustedImage;	// 232 = 0xe8
	NSArray *_autoAdjustmentFilters;	// 236 = 0xec
	CGRect _enhanceCalcRect;	// 240 = 0xf0
	NSArray *_autoRedEyeCorrections;	// 256 = 0x100
	CIFilter *_autoRedEyeFilter;	// 260 = 0x104
	CIFilter *_redEyeFilter;	// 264 = 0x108
	CGRect _normalizedCropRect;	// 268 = 0x10c
	float _straightenAngle;	// 284 = 0x11c
	float _rotationAngle;	// 288 = 0x120
	NSDictionary *_cachedMetadata;	// 292 = 0x124
	UIImage *_scaledCachedImage;	// 296 = 0x128
	dispatch_queue_s *_cachedImageQueue;	// 300 = 0x12c
	id _didEndZoomingBlock;	// 304 = 0x130
	id _editCompletionBlock;	// 308 = 0x134
	id _actionCompletionBlock;	// 312 = 0x138
	unsigned _didInitializeNavigationItem : 1;	// 316 = 0x13c
	unsigned _toolbarWasHidden : 1;	// 316 = 0x13c
	unsigned _isUserAction : 1;	// 316 = 0x13c
	unsigned _isCroppingImage : 1;	// 316 = 0x13c
	unsigned _didTapForRedEyeCorrection : 1;	// 316 = 0x13c
	unsigned _isCanceling : 1;	// 316 = 0x13c
	unsigned _isOrderedOut : 1;	// 316 = 0x13c
	unsigned _autoAdjustmentEnabled : 1;	// 316 = 0x13c
	unsigned _preloadingEnhancementFilters : 1;	// 317 = 0x13d
	unsigned _applyingAutoEnhance : 1;	// 317 = 0x13d
	unsigned _modal : 1;	// 317 = 0x13d
	unsigned _isUsingProxyImage : 1;	// 317 = 0x13d
	unsigned _shouldPublishToPhotoStreams : 1;	// 317 = 0x13d
@private
	int _currentMode;	// 320 = 0x140
}
@property(copy, nonatomic) id actionCompletionBlock;	// G=0xb6fdd; S=0xb6fed; @synthesize=_actionCompletionBlock
@property(readonly, assign, nonatomic) UIScrollView *scrollView;	// G=0xb6ee5; 
@property(retain, nonatomic) UIToolbar *toolbar;	// G=0x24a65; S=0xb6d01; 
@property(retain, nonatomic) UINavigationBar *navigationBar;	// G=0x25bf1; S=0xb6c71; 
@property(readonly, assign, nonatomic) PLManagedAsset *pendingPhoto;	// G=0xb6f1d; 
@property(retain, nonatomic) PLManagedAsset *editedPhoto;	// G=0xb6f0d; S=0x2357d; 
@property(assign, nonatomic) BOOL autoAdjustmentEnabled;	// G=0x26e59; S=0x26e6d; 
@property(assign, nonatomic) float rotationAngle;	// G=0xb6fbd; S=0xb6fcd; @synthesize=_rotationAngle
@property(readonly, assign, nonatomic) float straightenAngle;	// G=0x23351; 
@property(readonly, assign, nonatomic) CGRect normalizedCropRect;	// G=0x232f1; 
+ (void)initialize;	// 0x1f965
// declared property setter: - (void)setActionCompletionBlock:(id)block;	// 0xb6fed
// declared property getter: - (id)actionCompletionBlock;	// 0xb6fdd
// declared property setter: - (void)setRotationAngle:(float)angle;	// 0xb6fcd
// declared property getter: - (float)rotationAngle;	// 0xb6fbd
- (BOOL)isEditing;	// 0xb6fb9
- (void)setMinimumZoom:(float)zoom maximumZoom:(float)zoom2;	// 0x1fa65
- (BOOL)savesAdjustmentsToCameraRoll;	// 0xb6f81
- (CGSize)editedImageSize;	// 0x27795
- (void)_setUndoManager:(id)manager;	// 0x211c9
- (void)updatePendingPhoto;	// 0xb6f2d
// declared property getter: - (id)pendingPhoto;	// 0xb6f1d
// declared property getter: - (id)editedPhoto;	// 0xb6f0d
- (void)_setEditedPhoto:(id)photo resetFilters:(BOOL)filters;	// 0x235f5
// declared property setter: - (void)setEditedPhoto:(id)photo;	// 0x2357d
// declared property getter: - (id)scrollView;	// 0xb6ee5
// declared property getter: - (id)toolbar;	// 0x24a65
// declared property setter: - (void)setToolbar:(id)toolbar;	// 0xb6d01
// declared property getter: - (id)navigationBar;	// 0x25bf1
// declared property setter: - (void)setNavigationBar:(id)bar;	// 0xb6c71
- (BOOL)_currentStateIsEqualToAdjustmentState:(id)adjustmentState;	// 0x24815
- (id)_originalState;	// 0x24861
- (id)_adjustmentState;	// 0x23d41
- (void)_setAdjustmentState:(id)state;	// 0x290e1
- (void)_cleanupFilters;	// 0x23721
- (void)_loadFiltersFromDatabase;	// 0x2385d
- (void)_saveFiltersToAsset:(id)asset;	// 0xb67a9
- (void)_displayRedEyeCorrections:(id)corrections;	// 0x27539
- (void)_displayAllRedEyeCorrections;	// 0x274d9
- (BOOL)hasRedEyeCorrections;	// 0x25f59
- (id)redEyePoints;	// 0xb65f9
- (BOOL)_setRedEyeCorrections:(id)corrections changedCorrections:(id *)corrections2;	// 0xb6461
- (void)_removeRedEyeCorrections:(id)corrections;	// 0xb61bd
- (BOOL)removeRedEyePoint:(CGPoint)point;	// 0x283dd
- (void)_addRedEyeCorrections:(id)corrections fromFilter:(id)filter isUserAction:(BOOL)action;	// 0x270e9
- (void)addRedEyePoint:(CGPoint)point;	// 0x2863d
- (id)_newCIImageFromUIImage:(id)uiimage;	// 0x262fd
- (void)_setAspectRatio:(CGSize)ratio;	// 0x2a279
- (void)_rotatePhotoByAngle:(float)angle;	// 0x26415
- (void)_autoAdjustImage;	// 0x27031
- (void)_preloadEnhancementFilters;	// 0x26a49
// declared property setter: - (void)setAutoAdjustmentEnabled:(BOOL)enabled;	// 0x26e6d
- (void)_setAutoAdjustmentFilters:(id)filters;	// 0x26c01
- (id)_autoAdjustmentFilters;	// 0xb5a1d
- (void)_setAutoRedEyeFilterFromArray:(id)array;	// 0x26c89
- (id)_calculateAutoFiltersWithFeatures:(int)features includeGeometry:(BOOL)geometry;	// 0x26aa9
// declared property getter: - (BOOL)autoAdjustmentEnabled;	// 0x26e59
- (void)setStraightenAngle:(float)angle normalizedCropRect:(CGRect)rect;	// 0x2ac11
// declared property getter: - (CGRect)normalizedCropRect;	// 0x232f1
// declared property getter: - (float)straightenAngle;	// 0x23351
- (id)_masterImagePath;	// 0xb59dd
- (void)saveAdjustments;	// 0xb5975
- (void)_saveAdjustmentsToOriginal;	// 0xb522d
- (void)_saveXMPPropertiesToPhoto:(id)photo;	// 0xb4da5
- (void)_writeXMPSidecarToPhoto:(id)photo properties:(id)properties orientation:(int)orientation;	// 0xb49a9
- (BOOL)_writeXMPHeaderToPhoto:(id)photo properties:(id)properties orientation:(int)orientation;	// 0xb470d
- (void)_saveAdjustmentsToCopy;	// 0xb4435
- (id)newAdjustedImageWithoutGeometry;	// 0x25e75
- (id)_croppedStraightenedImage;	// 0xb43d5
- (id)_cropAndStraightenFilters;	// 0xb4151
- (id)_newImageFromImage:(id)image filters:(id)filters orientation:(int)orientation;	// 0x25fa1
- (id)_scaledCachedImage;	// 0x257d5
- (id)_scaledCachedImageFromData:(id)data utiType:(id)type imageSize:(CGSize)size scaledToMaxDimension:(unsigned)maxDimension outImageProperties:(id *)properties;	// 0xb3b21
- (id)_currentNonGeometryFilters;	// 0x25ec1
- (void)applicationDidEnterBackground:(id)application;	// 0xb3a69
- (void)albumDidChange:(id)album;	// 0xb3a65
- (void)didRedoNotification:(id)notification;	// 0xb3a55
- (void)didUndoNotification:(id)notification;	// 0xb3a45
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0xb3a11
- (void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;	// 0xb3965
- (void)willPresentAlertView:(id)view;	// 0xb393d
- (BOOL)_dismissPopoverViews;	// 0x2bd91
- (void)actionSheet:(id)sheet didDismissWithButtonIndex:(int)buttonIndex;	// 0x2ac3d
- (void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;	// 0x2a145
- (void)willPresentActionSheet:(id)sheet;	// 0x2a11d
- (void)scrollViewDidEndZooming:(id)scrollView withView:(id)view atScale:(float)scale;	// 0xb3901
- (id)viewForZoomingInScrollView:(id)scrollView;	// 0x23389
- (void)_undoTransformImage:(CGRect)image angle:(float)angle;	// 0xb3849
- (void)editViewDidTouchImage:(id)editView location:(CGPoint)location;	// 0x282c5
- (void)editViewDidCropImage:(id)editView;	// 0x2a9ed
- (void)editViewWillCropImage:(id)editView;	// 0x2b4cd
- (void)_updateToolbar;	// 0x24d05
- (void)_updateModeButtons;	// 0xb36d1
- (void)_updateEditedImage:(BOOL)image;	// 0x2badd
- (void)_setEditedImage:(id)image isProxyImage:(BOOL)image2 updateCropAndStraighten:(BOOL)straighten;	// 0x219fd
- (void)_updateEnhanceButton;	// 0x24aa1
- (void)_updateButtons;	// 0x24605
- (void)_updateControls;	// 0x2457d
- (void)_dismissSavingHUD;	// 0xb3689
- (void)_presentSavingHUD;	// 0xb35b5
- (void)_setControlsEnabled:(BOOL)enabled animated:(BOOL)animated;	// 0xb3411
- (void)orderOut:(BOOL)anOut;	// 0x2bcb1
- (void)cancel:(id)cancel;	// 0x28d85
- (void)save:(id)save;	// 0xb30e9
- (void)applySubmode:(id)submode;	// 0x2ba89
- (void)showConstraints:(id)constraints;	// 0x29d4d
- (void)selectEditMode:(id)mode;	// 0x272a1
- (void)rotatePhoto:(id)photo;	// 0x263d5
- (void)enhancePhoto:(id)photo;	// 0x26e05
- (void)undo:(id)undo;	// 0xb2fb5
- (void)revertToSaved:(id)saved;	// 0xb2e61
- (void)revertToOriginal:(id)original;	// 0xb2d79
- (void)_pushNewUndoManager;	// 0x21169
- (void)_popModalState;	// 0x29659
- (void)_pushModalState;	// 0x27b09
- (void)_setEditMode:(int)mode;	// 0x272dd
- (void)_dismissProgressAlertIfNeeded;	// 0x28ca1
- (void)_verifyProgress:(id)progress completion:(id)completion;	// 0x28ee9
- (void)_updateMessageOverlayFrame;	// 0x25c8d
- (void)hideMessage:(id)message;	// 0x2948d
- (void)showMessage:(id)message duration:(double)duration;	// 0x27e31
- (void)_displayAutoAdjustmentMessage;	// 0x27dcd
- (id)_constrainActionSheet;	// 0x29e5d
- (id)_buttonWithTag:(int)tag;	// 0x2498d
- (id)_rightButtonForMode:(int)mode enableDone:(BOOL)done enableSave:(BOOL)save;	// 0x216dd
- (id)_newButtonItemWithIcon:(id)icon title:(id)title target:(id)target action:(SEL)action tag:(int)tag;	// 0x2536d
- (id)_cropAndStraightenToolbarItems;	// 0x29b81
- (id)_redEyeLabel;	// 0x27b79
- (id)_startToolbarItems;	// 0x24e99
- (id)_currentToolbarItems;	// 0x24e5d
- (void)setToolbarItems:(id)items animated:(BOOL)animated;	// 0x25731
- (id)navigationItem;	// 0x212ed
- (void)motionEnded:(int)ended withEvent:(id)event;	// 0xb2c25
- (BOOL)canBecomeFirstResponder;	// 0x25da1
- (void)_updateCropInsetsForOrientation:(int)orientation;	// 0x25a69
- (BOOL)hidesBottomBarWhenPushed;	// 0x212e9
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0xb2bbd
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0xb2acd
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x25da5
- (void)viewDidAppear:(BOOL)view;	// 0x25e01
- (void)viewWillAppear:(BOOL)view;	// 0x259a5
- (void)viewDidLoad;	// 0x21129
- (void)loadView;	// 0x1fae1
- (BOOL)_isZoomedToScale:(float)scale;	// 0xb2a79
- (void)zoomToScale:(float)scale completionBlock:(id)block;	// 0xb29fd
- (float)rotatedZoomToFitScale;	// 0xb2941
- (float)zoomToFitScale;	// 0x244c1
- (void)sizeToFit:(BOOL)fit;	// 0x23fed
- (void)_startEditingWithAsset:(id)asset;	// 0x23495
- (void)startEditingAsset:(id)asset proxyImage:(id)image completion:(id)completion;	// 0x21899
- (void)dealloc;	// 0x2be69
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x1f999
@end