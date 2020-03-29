//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "CNContactPickerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString;

@interface OtherViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource, CNContactPickerDelegate>
{
    _Bool isCopyMultipleTags;
    NSArray *records;
}

- (void)formatMifareToNDEF:(id)arg1;
- (void)eraseMifareMemory:(id)arg1;
- (void)readMifareMemory:(id)arg1;
- (void)ReadMemoryComplete:(id)arg1;
- (void)ReadMemoryFailedUnsupportedTag:(id)arg1;
- (void)ReadMemoryStarted:(id)arg1;
- (void)ReadMemoryError:(id)arg1;
- (void)formatTag:(id)arg1;
- (void)copyMultipleTags:(id)arg1;
- (void)copySingleTag:(id)arg1;
- (void)copyTag:(id)arg1;
- (void)didWriteTag:(id)arg1;
- (void)didCopyTag:(id)arg1;
- (void)actAsRemoteClient:(id)arg1;
- (void)actAsRemoteHost:(id)arg1;
- (id)title;
- (void)openAdvancedTransceiver:(id)arg1;
- (void)openTestResponses:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)initWithStyle:(long long)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)ndefRecordsForRecords:(id)arg1;
- (id)ndefRecordFromDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
