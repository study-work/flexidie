//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class Group, IRCollation, IRKey, Media, Member, NSString, Schema, User;

@interface Item : NSObject
{
    Schema *_schema;
    id _peer;
}

+ (id)itemForKey:(id)arg1;
- (id)proxy;

@property(readonly, nonatomic) IRCollation *media;
@property(readonly, nonatomic) IRCollation *likes;
@property(readonly, nonatomic) IRKey *postedItemKey;
@property(readonly, nonatomic) NSString *sendState;
@property(readonly, nonatomic) _Bool contentRequiresUpdate;
@property(readonly, nonatomic) NSString *newGroupName;
@property(readonly, nonatomic) Media *picture;
@property(readonly, nonatomic) int likeCount;
@property(readonly, nonatomic) _Bool likedByMe;
@property(readonly, nonatomic) NSString *mediaKind;
@property(readonly, nonatomic) int totalMediaCount;
@property(readonly, nonatomic) int mediaCount;
@property(readonly, nonatomic) NSString *message;
@property(readonly, nonatomic) Member *member;
@property(readonly, nonatomic) User *user;
@property(readonly, nonatomic) long long createdTime;
@property(readonly, nonatomic) NSString *type;
@property(readonly, nonatomic) long long lastReadId;
@property(readonly, nonatomic) Group *group;
@property(readonly, nonatomic) NSString *gifSource;
@property(readonly, nonatomic) NSString *gifPageUrl;
@property(readonly, nonatomic) NSString *gifPageName;
@property(readonly, nonatomic) int gifHeight;
@property(readonly, nonatomic) int gifWidth;
@property(readonly, nonatomic) NSString *subtype;

- (id)peer;
- (void)dealloc;
- (id)initWithSchema:(id)arg1 peer:(id)arg2;

@end

