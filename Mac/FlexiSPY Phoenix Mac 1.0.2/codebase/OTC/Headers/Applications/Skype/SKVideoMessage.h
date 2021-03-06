/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "SKObjectInterface.h"

//#import "ALEVideoMessageProtocol-Protocol.h"

@class NSDate, NSString, UIImage;

@interface SKVideoMessage : NSObject //SKObjectInterface <ALEVideoMessageProtocol>
{
    UIImage *_thumbnail;
    NSDate *_thumbnailRequestTimestamp;
}

+ (id)propertyKeyPrefixes;
+ (id)keyPathsForValuesAffectingThumbnail;
+ (id)keyPathsForValuesAffectingCreationTimestamp;
+ (id)keyPathsForValuesAffectingAuthor;
+ (id)keyPathsForValuesAffectingDescription;
+ (id)keyPathsForValuesAffectingTitle;
+ (id)keyPathsForValuesAffectingVodProgress;
+ (id)keyPathsForValuesAffectingUploadingProgress;
+ (id)keyPathsForValuesAffectingProgress;
+ (id)keyPathsForValuesAffectingPublicLink;
+ (id)keyPathsForValuesAffectingLocalPath;
+ (id)keyPathsForValuesAffectingVodPath;
+ (id)keyPathsForValuesAffectingThumbnailUrl;
+ (id)keyPathsForValuesAffectingVodStatus;
+ (id)keyPathsForValuesAffectingStatus;
@property(retain) NSDate *thumbnailRequestTimestamp; // @synthesize thumbnailRequestTimestamp=_thumbnailRequestTimestamp;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
//- (void).cxx_destruct;
- (id)createThumbnailPath:(id)arg1;
- (void)writeThumbnail:(id)arg1 toLocalPath:(id)arg2;
- (id)readThumbnailFromPath:(id)arg1;
- (void)prepareForPlay;
- (void)dealloc;
- (void)didChangeValueForKey:(id)arg1;
- (void)removeLocalFile;
@property(readonly, nonatomic) NSDate *creationTimestamp;
@property(readonly, nonatomic) NSString *author;
@property(readonly, nonatomic) NSString *description;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) float vodProgress;
@property(readonly, nonatomic) float uploadingProgress;
@property(readonly, nonatomic) float progress;
@property(readonly, nonatomic) NSString *publicLink;
@property(readonly, nonatomic) NSString *localPath;
@property(readonly, nonatomic) NSString *vodPath;
@property(readonly, nonatomic) NSString *thumbnailUrl;
@property(readonly, nonatomic) int vodStatus;
@property(readonly, nonatomic) int status;
- (int)vodStatusForSkyLibVODStatus:(int)arg1;
- (int)statusForSkyLibStatus:(int)arg1;
- (void)OnThumbnailPath:(id)arg1 andLocalpath:(id)arg2;
- (void)OnPropertyChange:(id)arg1 andPropkey:(int)arg2;
- (void)willEnterBackground:(id)arg1;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)awakeFromAutowire;
- (id)initWithSkyLibObjectID:(unsigned int)arg1 andSkylib:(id)arg2 withDispatcher:(id)arg3;
- (id)initWithFilePath:(id)arg1 thumbnail:(id)arg2 title:(id)arg3 description:(id)arg4;


// version 4.8
@property(readonly, assign, nonatomic) NSString* filePath;

@end

