//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "MCActivityTarget.h"
#import "NSMenuDelegate.h"
#import "TerminationHandler.h"

@class MFMailbox, MailboxesChooser, NSArray, NSButton, NSConditionLock, NSMutableDictionary, NSMutableSet, NSPopUpButton, NSString, NSTextField, NSView, NSWindow;

@interface MailboxesController : NSObject <MCActivityTarget, NSMenuDelegate, TerminationHandler>
{
    MFMailbox *_currentTransferMailbox;	// 8 = 0x8
    NSConditionLock *_smartMailboxesNeedSavingLock;	// 16 = 0x10
    NSMutableSet *_rootMailboxMenus;	// 24 = 0x18
    NSMutableDictionary *_contextualMenus;	// 32 = 0x20
    BOOL _currentTransferDeletesOriginals;	// 40 = 0x28
    NSWindow *_makeNewMailboxPanel;	// 48 = 0x30
    NSTextField *_makeNewMailboxField;	// 56 = 0x38
    NSTextField *_makeNewMailboxMessage;	// 64 = 0x40
    NSButton *_makeNewMailboxOKButton;	// 72 = 0x48
    NSPopUpButton *_makeNewMailboxPopUp;	// 80 = 0x50
    MailboxesChooser *_makeNewMailboxChooser;	// 88 = 0x58
    NSView *_exportChildrenView;	// 96 = 0x60
    NSButton *_exportChildrenCheckbox;	// 104 = 0x68
    id <MailboxSelectionOwner> _mailboxSelectionOwner;	// 112 = 0x70
    MailboxesChooser *_menuMailboxesChooser;	// 120 = 0x78
}

+ (void)_createDownsizedImages;	// IMP=0x00000001001d02ed
+ (id)_flagColorForColor:(BOOL)arg1;	// IMP=0x00000001001d00b0
+ (id)_imageForFlagColor:(BOOL)arg1 ofSize:(long long)arg2;	// IMP=0x00000001001cffd5
+ (id)_iconForSmartMailboxWithSize:(long long)arg1 style:(unsigned long long)arg2;	// IMP=0x000000010003410a
+ (id)_iconForGenericMailboxWithSize:(long long)arg1 style:(unsigned long long)arg2;	// IMP=0x000000010003424c
+ (id)iconForMailbox:(id)arg1 size:(long long)arg2 style:(unsigned long long)arg3;	// IMP=0x000000010002dc48
@property(retain, nonatomic) MailboxesChooser *menuMailboxesChooser; // @synthesize menuMailboxesChooser=_menuMailboxesChooser;
@property(nonatomic) BOOL currentTransferDeletesOriginals; // @synthesize currentTransferDeletesOriginals=_currentTransferDeletesOriginals;
@property(nonatomic) __weak id <MailboxSelectionOwner> mailboxSelectionOwner; // @synthesize mailboxSelectionOwner=_mailboxSelectionOwner;
@property(nonatomic) __weak NSButton *exportChildrenCheckbox; // @synthesize exportChildrenCheckbox=_exportChildrenCheckbox;
@property(retain, nonatomic) NSView *exportChildrenView; // @synthesize exportChildrenView=_exportChildrenView;
@property(retain, nonatomic) MailboxesChooser *makeNewMailboxChooser; // @synthesize makeNewMailboxChooser=_makeNewMailboxChooser;
@property(nonatomic) __weak NSPopUpButton *makeNewMailboxPopUp; // @synthesize makeNewMailboxPopUp=_makeNewMailboxPopUp;
@property(nonatomic) __weak NSButton *makeNewMailboxOKButton; // @synthesize makeNewMailboxOKButton=_makeNewMailboxOKButton;
@property(nonatomic) __weak NSTextField *makeNewMailboxMessage; // @synthesize makeNewMailboxMessage=_makeNewMailboxMessage;
@property(nonatomic) __weak NSTextField *makeNewMailboxField; // @synthesize makeNewMailboxField=_makeNewMailboxField;
@property(retain, nonatomic) NSWindow *makeNewMailboxPanel; // @synthesize makeNewMailboxPanel=_makeNewMailboxPanel;
- (void).cxx_destruct;	// IMP=0x00000001001db02f
- (id)_mergeOldMailUserInfoDictionary:(id)arg1 withSyncChanges:(id)arg2;	// IMP=0x00000001001dad9d
- (id)_filteredMailUserInfoDictionary:(id)arg1;	// IMP=0x00000001001dacb9
- (id)_smartMailboxesFromDictionaryRepresentations:(id)arg1 andMergeOldUserInfoFromMailboxes:(BOOL)arg2;	// IMP=0x000000010000a452
- (void)_removeLocalProperties:(id)arg1 fromSmartMailboxes:(id)arg2;	// IMP=0x000000010009eef8
- (id)_smartMailboxesDictionaryRepresentationsFilteredForSync:(BOOL)arg1 localProperties:(id *)arg2;	// IMP=0x000000010009eb8c
- (id)_loadDefaultSmartMailboxes;	// IMP=0x00000001001da9bd
- (void)_addLocalProperties:(id)arg1 toSmartMailboxes:(id)arg2;	// IMP=0x000000010000a047
- (id)_readSmartMailboxesFromDisk;	// IMP=0x0000000100009aef
- (id)_sortMailboxesDictionaries:(id)arg1 withIdentifiers:(id)arg2;	// IMP=0x00000001001da6c0
- (id)_sortMailboxes:(id)arg1 withIdentifiers:(id)arg2;	// IMP=0x00000001001da3e8
- (void)_writeSmartMailboxesToDisk;	// IMP=0x000000010009e4cf
- (void)_writeSmartMailboxesToDiskWithDelay;	// IMP=0x000000010009c84e
- (void)_setSmartMailboxesNeedSaving:(BOOL)arg1;	// IMP=0x000000010009c703
- (BOOL)_smartMailboxesNeedSaving;	// IMP=0x00000001001da3bf
- (void)_smartMailboxChanged:(id)arg1;	// IMP=0x000000010009c6ec
- (void)nowWouldBeAGoodTimeToTerminate:(id)arg1;	// IMP=0x00000001001da343
@property(readonly, copy, nonatomic) NSArray *smartMailboxes;
- (void)_diagnosticsNotificationReceived:(id)arg1;	// IMP=0x00000001001d9f49
- (void)_reloadSmartMailboxesSyncedFile:(id)arg1;	// IMP=0x00000001001d9ee7
- (void)initializeSmartMailboxes;	// IMP=0x00000001001d9dc9
- (void)addSmartMailboxFolder:(id)arg1;	// IMP=0x00000001001d9a4a
- (void)smartMailboxWasEdited:(id)arg1;	// IMP=0x00000001001d97cf
- (void)tentativelyAddSmartMailbox:(id)arg1;	// IMP=0x00000001001d9713
- (void)addSmartMailbox:(id)arg1 select:(BOOL)arg2;	// IMP=0x00000001001d9313
- (BOOL)moveOrCopy:(id)arg1 smartMailboxes:(id)arg2 toIndex:(unsigned long long)arg3;	// IMP=0x00000001001d8c0e
- (BOOL)copyMailboxes:(id)arg1 toParentMailbox:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000001001d8715
- (void)_synchronouslyCopyMailboxes:(id)arg1 toParent:(id)arg2 atIndex:(unsigned long long)arg3 originalParent:(id)arg4;	// IMP=0x00000001001d6d91
- (BOOL)moveMailboxes:(id)arg1 toParentMailbox:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000001001d69b2
- (void)removeAccount:(id)arg1;	// IMP=0x00000001001d6972
- (BOOL)moveAccount:(id)arg1 toAfterAccount:(id)arg2;	// IMP=0x00000001001d6811
- (BOOL)menuHasKeyEquivalent:(id)arg1 forEvent:(id)arg2 target:(id *)arg3 action:(SEL *)arg4;	// IMP=0x0000000100094019
- (void)menuDidClose:(id)arg1;	// IMP=0x00000001000926de
- (void)menuWillOpen:(id)arg1;	// IMP=0x000000010008f6f7
- (void)menuNeedsUpdate:(id)arg1;	// IMP=0x000000010008f31f
- (BOOL)_isCopyMenu:(id)arg1;	// IMP=0x000000010008f612
- (BOOL)_isMoveMenu:(id)arg1;	// IMP=0x000000010008f52d
- (void)bringUpTransferMenu:(id)arg1;	// IMP=0x00000001001d6797
- (void)cancelClicked:(id)arg1;	// IMP=0x00000001001d66d8
- (void)okClicked:(id)arg1;	// IMP=0x00000001001d6613
- (void)controlTextDidChange:(id)arg1;	// IMP=0x00000001001d6519
- (id)_unreadMessagesInMailbox:(id)arg1;	// IMP=0x000000010009313c
- (void)_asynchronouslyChangeReadFlag:(BOOL)arg1 forMessages:(id)arg2;	// IMP=0x000000010009367a
- (void)_changeReadFlag:(BOOL)arg1 forMessages:(id)arg2;	// IMP=0x0000000100093409
- (void)markAllAsRead:(id)arg1;	// IMP=0x0000000100092855
- (void)_gatherMessagesForFlagChange:(id)arg1;	// IMP=0x0000000100092a5d
- (void)exportMailbox:(id)arg1;	// IMP=0x00000001001d5bea
- (void)_exportMailboxes:(id)arg1 toDirectory:(id)arg2 includeChildren:(id)arg3;	// IMP=0x00000001001d5094
- (void)_userEditedMailboxName:(id)arg1;	// IMP=0x00000001001d4d9c
- (void)renameMailbox:(id)arg1;	// IMP=0x00000001001d4cfa
- (void)_synchronouslySetName:(id)arg1 andParent:(id)arg2 forMailboxes:(id)arg3 insertionIndex:(unsigned long long)arg4;	// IMP=0x00000001001d3c7f
- (void)_updateDisplayIndexesInParentMailbox:(id)arg1 byMovingMailboxes:(id)arg2 toIndex:(unsigned long long)arg3;	// IMP=0x00000001001d3813
- (void)removeFromVIPSenders:(id)arg1;	// IMP=0x00000001001d3785
- (void)deleteMailbox:(id)arg1;	// IMP=0x00000001001d2a6d
- (void)_synchronouslyDeleteMailboxes:(id)arg1;	// IMP=0x00000001001d20fe
- (void)mailboxPopUpChanged:(id)arg1;	// IMP=0x00000001001d20af
- (void)newGroup:(id)arg1;	// IMP=0x00000001001d2073
- (void)newFolder:(id)arg1;	// IMP=0x00000001001d206d
- (void)duplicateSmartMailbox:(id)arg1;	// IMP=0x00000001001d1e45
- (void)editSmartMailbox:(id)arg1;	// IMP=0x00000001001d1d92
- (void)newSmartMailbox:(id)arg1;	// IMP=0x00000001001d171a
- (void)showOutOfOfficeSettings:(id)arg1;	// IMP=0x00000001001d165b
- (void)newMailbox:(id)arg1;	// IMP=0x00000001001d15ec
- (void)newMailboxWithParent:(id)arg1;	// IMP=0x00000001001d0d65
- (void)_configureNewMailboxPanelForMailbox:(id)arg1;	// IMP=0x00000001001d0a09
- (void)_synchronouslyCreateNewMailboxWithName:(id)arg1 parent:(id)arg2;	// IMP=0x00000001001d0403
- (BOOL)validateMenuItem:(id)arg1;	// IMP=0x000000010008fc94
- (id)mailboxSelectionOwnerFromSender:(id)arg1;	// IMP=0x00000001001d0280
- (void)resignMailboxSelectionOwnerFor:(id)arg1;	// IMP=0x00000001000b9b59
@property(readonly, nonatomic) MFMailbox *currentTransferMailbox;
- (void)setCurrentTransferMailbox:(id)arg1 deletedOriginals:(BOOL)arg2;	// IMP=0x00000001000b2d5a
- (void)saveDefaults;	// IMP=0x00000001000b2e04
- (void)readDefaults;	// IMP=0x0000000100003476
- (id)menuForMailbox:(id)arg1 isContextMenu:(BOOL)arg2;	// IMP=0x000000010004f93e
- (void)dealloc;	// IMP=0x00000001001d018b
- (id)init;	// IMP=0x0000000100003354
- (id)previousMailboxIdentifiersOfType:(id)arg1 fromDictionary:(id)arg2;	// IMP=0x00000001001cf5e1
- (id)previousVersionedSmartMailboxIdentifiersFromDictionary:(id)arg1;	// IMP=0x00000001001cf5c2
- (id)previousSmartMailboxIdentifiersFromDictionary:(id)arg1;	// IMP=0x00000001001cf5a3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isSmartMailbox;
@property(readonly) Class superclass;

@end

