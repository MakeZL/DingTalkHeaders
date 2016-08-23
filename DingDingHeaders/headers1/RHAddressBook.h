//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet, RHAddressBookSharedServices;
@protocol OS_dispatch_queue;

@interface RHAddressBook : NSObject
{
    RHAddressBookSharedServices *_sharedServices;
    void *_addressBookRef;
    NSObject<OS_dispatch_queue> *_addressBookQueue;
    NSMutableSet *_sources;
    NSMutableSet *_groups;
    NSMutableSet *_people;
    struct __CFDictionary *_refToRecordMap;
    struct __CFDictionary *_personIDToRecordMap;
}

+ (_Bool)compositeNameFormatLastNameFirst;
+ (_Bool)compositeNameFormatFirstNameFirst;
+ (unsigned int)compositeNameFormat;
+ (_Bool)orderByLastName;
+ (_Bool)orderByFirstName;
+ (unsigned int)sortOrdering;
+ (int)authorizationStatus;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *addressBookQueue; // @synthesize addressBookQueue=_addressBookQueue;
- (void)_recordCheckOut:(id)arg1;
- (void)_recordCheckIn:(id)arg1;
- (void)rebuildPersonIDToRecordMap:(_Bool)arg1;
- (void)addressBookExternallyChanged:(id)arg1;
- (void)revert;
- (_Bool)hasUnsavedChanges;
- (_Bool)saveWithError:(id *)arg1;
- (_Bool)save:(id *)arg1;
- (_Bool)save;
- (_Bool)removeGroup:(id)arg1 error:(id *)arg2;
- (_Bool)removeGroup:(id)arg1;
- (_Bool)removePerson:(id)arg1 error:(id *)arg2;
- (_Bool)removePerson:(id)arg1;
- (id)vCardRepresentationForPeople:(id)arg1;
- (id)addPeopleFromVCardRepresentation:(id)arg1 toSource:(id)arg2;
- (id)addPeopleFromVCardRepresentationToDefaultSource:(id)arg1;
- (_Bool)addGroup:(id)arg1 error:(id *)arg2;
- (_Bool)addGroup:(id)arg1;
- (id)newGroupInSource:(id)arg1;
- (id)newGroupInDefaultSource;
- (_Bool)addPerson:(id)arg1 error:(id *)arg2;
- (_Bool)addPerson:(id)arg1;
- (id)newPersonInSource:(id)arg1;
- (id)newPersonInDefaultSource;
- (id)personForABRecordID:(int)arg1;
- (id)peopleForABRecordRefs:(struct __CFArray *)arg1;
- (id)personForABRecordRef:(void *)arg1;
- (id)peopleWithEmail:(id)arg1;
- (id)peopleWithName:(id)arg1;
- (id)peopleOrderedByLastName;
- (id)peopleOrderedByFirstName;
- (id)peopleOrderedByUsersPreference;
- (id)peopleOrderedBySortOrdering:(unsigned int)arg1;
- (long long)numberOfPeople;
- (id)people;
- (id)groupForABRecordID:(int)arg1;
- (id)groupsForABRecordRefs:(struct __CFArray *)arg1;
- (id)groupForABRecordRef:(void *)arg1;
- (id)groupsInSource:(id)arg1;
- (long long)numberOfGroups;
- (id)groups;
- (id)sourceForABRecordID:(int)arg1;
- (id)sourcesForABRecordRefs:(struct __CFArray *)arg1;
- (id)sourceForABRecordRef:(void *)arg1;
- (id)defaultSource;
- (id)sources;
- (void)performAddressBookAction:(CDUnknownBlockType)arg1 waitUntilDone:(_Bool)arg2;
- (void)requestAuthorizationWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

