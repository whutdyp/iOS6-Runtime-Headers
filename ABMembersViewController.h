/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABMembersController, _UIAccessDeniedView;

@interface ABMembersViewController : ABAbstractViewController <ABNewPersonViewControllerDelegate, ABMembersControllerDelegate, ABViewControllerBannerViewProtocol, ABPersonEditDelegate> {
    ABMembersController *_membersController;
    int _insertionProperty;
    id _insertionValue;
    id _insertionLabel;
    int _rightButtonBehavior;
    int _leftButtonBehavior;
    BOOL _shouldHandleExternalChangeOnPersonViewControllers;
    _UIAccessDeniedView *_accessDeniedView;
}

@property(readonly) BOOL allowsCancel;
@property(readonly) BOOL allowsCardEditing;
@property(readonly) BOOL shouldShowGroups;
@property(readonly) _UIAccessDeniedView * accessDeniedView;


- (void)searchCurrentContactsGroupForWords:(id)arg1 animated:(BOOL)arg2;
- (BOOL)isNavigationButtonEnabled:(int)arg1;
- (BOOL)personViewController:(id)arg1 shouldContinueAfterEditingConfirmed:(BOOL)arg2 forPerson:(void*)arg3;
- (void)insertProperty:(int*)arg1 insertValue:(id*)arg2 insertLabel:(id*)arg3;
- (void)preferredPersonDidChangeToPerson:(void*)arg1;
- (void)linksUpdatedForPerson:(void*)arg1;
- (void)nameUpdatedForPerson:(void*)arg1;
- (void)personWasDeleted;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2;
- (void)handleExternalChangeOnPersonViewControllers;
- (void)reallyHandleExternalChangeOnPersonViewControllers;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2 informDelegate:(BOOL)arg3;
- (void)updateNavigationButtonsInSearchMode:(BOOL)arg1;
- (void)resetInsertionData;
- (BOOL)showCardForPerson:(void*)arg1 withMemberCell:(id)arg2 animate:(BOOL)arg3 selectAndScrollToPerson:(BOOL)arg4;
- (id)membersController;
- (void)updateNavigationButtonsInSearchMode:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateLeftNavigationButtonAnimated:(BOOL)arg1;
- (void)addPerson:(id)arg1;
- (void)refreshEverythingNow;
- (id)accessDeniedView;
- (void)cancelRefreshingAccount;
- (void)startRefreshingAccount;
- (void)updateNavigationButtonsAnimated:(BOOL)arg1;
- (void)_updateForModel;
- (void)updateView;
- (void)_applicationEnteringBackground;
- (int)abViewControllerType;
- (void)presentGroupsViewController;
- (void)peoplePickerNavigationControllerNavigationBarStoppedAnimating:(id)arg1;
- (id)initWithModel:(id)arg1;
- (BOOL)allowsCancel;
- (BOOL)allowsCardEditing;
- (BOOL)showCardForPerson:(void*)arg1 animate:(BOOL)arg2 selectAndScrollToPerson:(BOOL)arg3;
- (void)_applicationEnteringForeground;
- (void)setSearchCompletionDelegate:(id)arg1;
- (void)setBannerTitle:(id)arg1 value:(id)arg2;
- (void)cancelSearching:(id)arg1;
- (void)resetStateForDisplayedFilterChange;
- (void)loadState;
- (BOOL)allowsShowingPersonsCards;
- (BOOL)membersController:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;
- (void)personWasSelected:(void*)arg1;
- (void)showInsertEditorForPerson:(void*)arg1 animate:(BOOL)arg2;
- (BOOL)showCardForPerson:(void*)arg1 animate:(BOOL)arg2;
- (BOOL)showCardForPerson:(void*)arg1 withMemberCell:(id)arg2 animate:(BOOL)arg3;
- (void)membersControllerWillEndSearching:(id)arg1;
- (void)membersControllerDidEndServerSearch:(id)arg1;
- (void)membersControllerWillStartSearching:(id)arg1;
- (BOOL)shouldShowGroups;
- (id)styleProvider;
- (void)setStyleProvider:(id)arg1;
- (void)modelDatabaseChange:(id)arg1;
- (void)updateTitle;
- (void)setAddressBook:(void*)arg1;
- (void)cancel:(id)arg1;
- (void)dealloc;
- (id)model;
- (BOOL)canHandleSnapbackIdentifier:(id)arg1 animated:(BOOL)arg2;
- (id)defaultPNGName;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)applicationDidResume;
- (void)didReceiveMemoryWarning;
- (void)applicationWillSuspend;

@end