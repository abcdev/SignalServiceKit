// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import "ProtocolBuffers.h"

// @@protoc_insertion_point(imports)

@class AttachmentPointer;
@class AttachmentPointerBuilder;
@class ContactDetails;
@class ContactDetailsAvatar;
@class ContactDetailsAvatarBuilder;
@class ContactDetailsBuilder;
@class Content;
@class ContentBuilder;
@class DataMessage;
@class DataMessageBuilder;
@class Envelope;
@class EnvelopeBuilder;
@class GroupContext;
@class GroupContextBuilder;
@class GroupDetails;
@class GroupDetailsAvatar;
@class GroupDetailsAvatarBuilder;
@class GroupDetailsBuilder;
@class SyncMessage;
@class SyncMessageBuilder;
@class SyncMessageContacts;
@class SyncMessageContactsBuilder;
@class SyncMessageGroups;
@class SyncMessageGroupsBuilder;
@class SyncMessageRequest;
@class SyncMessageRequestBuilder;
@class SyncMessageSent;
@class SyncMessageSentBuilder;
#ifndef __has_feature
  #define __has_feature(x) 0 // Compatibility with non-clang compilers.
#endif // __has_feature

#ifndef NS_RETURNS_NOT_RETAINED
  #if __has_feature(attribute_ns_returns_not_retained)
    #define NS_RETURNS_NOT_RETAINED __attribute__((ns_returns_not_retained))
  #else
    #define NS_RETURNS_NOT_RETAINED
  #endif
#endif

typedef enum {
  EnvelopeTypeUnknown = 0,
  EnvelopeTypeCiphertext = 1,
  EnvelopeTypeKeyExchange = 2,
  EnvelopeTypePrekeyBundle = 3,
  EnvelopeTypeReceipt = 5,
} EnvelopeType;

BOOL EnvelopeTypeIsValidValue(EnvelopeType value);

typedef enum {
  DataMessageFlagsEndSession = 1,
} DataMessageFlags;

BOOL DataMessageFlagsIsValidValue(DataMessageFlags value);

typedef enum {
  SyncMessageRequestTypeUnknown = 0,
  SyncMessageRequestTypeContacts = 1,
  SyncMessageRequestTypeGroups = 2,
} SyncMessageRequestType;

BOOL SyncMessageRequestTypeIsValidValue(SyncMessageRequestType value);

typedef enum {
  GroupContextTypeUnknown = 0,
  GroupContextTypeUpdate = 1,
  GroupContextTypeDeliver = 2,
  GroupContextTypeQuit = 3,
} GroupContextType;

BOOL GroupContextTypeIsValidValue(GroupContextType value);


@interface TextSecureRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

@interface Envelope : PBGeneratedMessage {
@private
  BOOL hasTimestamp_:1;
  BOOL hasSource_:1;
  BOOL hasRelay_:1;
  BOOL hasLegacyMessage_:1;
  BOOL hasContent_:1;
  BOOL hasSourceDevice_:1;
  BOOL hasType_:1;
  UInt64 timestamp;
  NSString* source;
  NSString* relay;
  NSData* legacyMessage;
  NSData* content;
  UInt32 sourceDevice;
  EnvelopeType type;
}
- (BOOL) hasType;
- (BOOL) hasSource;
- (BOOL) hasSourceDevice;
- (BOOL) hasRelay;
- (BOOL) hasTimestamp;
- (BOOL) hasLegacyMessage;
- (BOOL) hasContent;
@property (readonly) EnvelopeType type;
@property (readonly, strong) NSString* source;
@property (readonly) UInt32 sourceDevice;
@property (readonly, strong) NSString* relay;
@property (readonly) UInt64 timestamp;
@property (readonly, strong) NSData* legacyMessage;
@property (readonly, strong) NSData* content;

+ (Envelope*) defaultInstance;
- (Envelope*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (EnvelopeBuilder*) builder;
+ (EnvelopeBuilder*) builder;
+ (EnvelopeBuilder*) builderWithPrototype:(Envelope*) prototype;
- (EnvelopeBuilder*) toBuilder;

+ (Envelope*) parseFromData:(NSData*) data;
+ (Envelope*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Envelope*) parseFromInputStream:(NSInputStream*) input;
+ (Envelope*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Envelope*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (Envelope*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface EnvelopeBuilder : PBGeneratedMessageBuilder {
@private
  Envelope* result;
}

- (Envelope*) defaultInstance;

- (EnvelopeBuilder*) clear;
- (EnvelopeBuilder*) clone;

- (Envelope*) build;
- (Envelope*) buildPartial;

- (EnvelopeBuilder*) mergeFrom:(Envelope*) other;
- (EnvelopeBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (EnvelopeBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasType;
- (EnvelopeType) type;
- (EnvelopeBuilder*) setType:(EnvelopeType) value;
- (EnvelopeBuilder*) clearType;

- (BOOL) hasSource;
- (NSString*) source;
- (EnvelopeBuilder*) setSource:(NSString*) value;
- (EnvelopeBuilder*) clearSource;

- (BOOL) hasSourceDevice;
- (UInt32) sourceDevice;
- (EnvelopeBuilder*) setSourceDevice:(UInt32) value;
- (EnvelopeBuilder*) clearSourceDevice;

- (BOOL) hasRelay;
- (NSString*) relay;
- (EnvelopeBuilder*) setRelay:(NSString*) value;
- (EnvelopeBuilder*) clearRelay;

- (BOOL) hasTimestamp;
- (UInt64) timestamp;
- (EnvelopeBuilder*) setTimestamp:(UInt64) value;
- (EnvelopeBuilder*) clearTimestamp;

- (BOOL) hasLegacyMessage;
- (NSData*) legacyMessage;
- (EnvelopeBuilder*) setLegacyMessage:(NSData*) value;
- (EnvelopeBuilder*) clearLegacyMessage;

- (BOOL) hasContent;
- (NSData*) content;
- (EnvelopeBuilder*) setContent:(NSData*) value;
- (EnvelopeBuilder*) clearContent;
@end

@interface Content : PBGeneratedMessage {
@private
  BOOL hasDataMessage_:1;
  BOOL hasSyncMessage_:1;
  DataMessage* dataMessage;
  SyncMessage* syncMessage;
}
- (BOOL) hasDataMessage;
- (BOOL) hasSyncMessage;
@property (readonly, strong) DataMessage* dataMessage;
@property (readonly, strong) SyncMessage* syncMessage;

+ (Content*) defaultInstance;
- (Content*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (ContentBuilder*) builder;
+ (ContentBuilder*) builder;
+ (ContentBuilder*) builderWithPrototype:(Content*) prototype;
- (ContentBuilder*) toBuilder;

+ (Content*) parseFromData:(NSData*) data;
+ (Content*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Content*) parseFromInputStream:(NSInputStream*) input;
+ (Content*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Content*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (Content*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface ContentBuilder : PBGeneratedMessageBuilder {
@private
  Content* result;
}

- (Content*) defaultInstance;

- (ContentBuilder*) clear;
- (ContentBuilder*) clone;

- (Content*) build;
- (Content*) buildPartial;

- (ContentBuilder*) mergeFrom:(Content*) other;
- (ContentBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (ContentBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasDataMessage;
- (DataMessage*) dataMessage;
- (ContentBuilder*) setDataMessage:(DataMessage*) value;
- (ContentBuilder*) setDataMessageBuilder:(DataMessageBuilder*) builderForValue;
- (ContentBuilder*) mergeDataMessage:(DataMessage*) value;
- (ContentBuilder*) clearDataMessage;

- (BOOL) hasSyncMessage;
- (SyncMessage*) syncMessage;
- (ContentBuilder*) setSyncMessage:(SyncMessage*) value;
- (ContentBuilder*) setSyncMessageBuilder:(SyncMessageBuilder*) builderForValue;
- (ContentBuilder*) mergeSyncMessage:(SyncMessage*) value;
- (ContentBuilder*) clearSyncMessage;
@end

@interface DataMessage : PBGeneratedMessage {
@private
  BOOL hasBody_:1;
  BOOL hasGroup_:1;
  BOOL hasFlags_:1;
  NSString* body;
  GroupContext* group;
  UInt32 flags;
  NSMutableArray * attachmentsArray;
}
- (BOOL) hasBody;
- (BOOL) hasGroup;
- (BOOL) hasFlags;
@property (readonly, strong) NSString* body;
@property (readonly, strong) NSArray * attachments;
@property (readonly, strong) GroupContext* group;
@property (readonly) UInt32 flags;
- (AttachmentPointer*)attachmentsAtIndex:(NSUInteger)index;

+ (DataMessage*) defaultInstance;
- (DataMessage*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (DataMessageBuilder*) builder;
+ (DataMessageBuilder*) builder;
+ (DataMessageBuilder*) builderWithPrototype:(DataMessage*) prototype;
- (DataMessageBuilder*) toBuilder;

+ (DataMessage*) parseFromData:(NSData*) data;
+ (DataMessage*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (DataMessage*) parseFromInputStream:(NSInputStream*) input;
+ (DataMessage*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (DataMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (DataMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface DataMessageBuilder : PBGeneratedMessageBuilder {
@private
  DataMessage* result;
}

- (DataMessage*) defaultInstance;

- (DataMessageBuilder*) clear;
- (DataMessageBuilder*) clone;

- (DataMessage*) build;
- (DataMessage*) buildPartial;

- (DataMessageBuilder*) mergeFrom:(DataMessage*) other;
- (DataMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (DataMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasBody;
- (NSString*) body;
- (DataMessageBuilder*) setBody:(NSString*) value;
- (DataMessageBuilder*) clearBody;

- (NSMutableArray *)attachments;
- (AttachmentPointer*)attachmentsAtIndex:(NSUInteger)index;
- (DataMessageBuilder *)addAttachments:(AttachmentPointer*)value;
- (DataMessageBuilder *)setAttachmentsArray:(NSArray *)array;
- (DataMessageBuilder *)clearAttachments;

- (BOOL) hasGroup;
- (GroupContext*) group;
- (DataMessageBuilder*) setGroup:(GroupContext*) value;
- (DataMessageBuilder*) setGroupBuilder:(GroupContextBuilder*) builderForValue;
- (DataMessageBuilder*) mergeGroup:(GroupContext*) value;
- (DataMessageBuilder*) clearGroup;

- (BOOL) hasFlags;
- (UInt32) flags;
- (DataMessageBuilder*) setFlags:(UInt32) value;
- (DataMessageBuilder*) clearFlags;
@end

@interface SyncMessage : PBGeneratedMessage {
@private
  BOOL hasSent_:1;
  BOOL hasContacts_:1;
  BOOL hasGroups_:1;
  BOOL hasRequest_:1;
  SyncMessageSent* sent;
  SyncMessageContacts* contacts;
  SyncMessageGroups* groups;
  SyncMessageRequest* request;
}
- (BOOL) hasSent;
- (BOOL) hasContacts;
- (BOOL) hasGroups;
- (BOOL) hasRequest;
@property (readonly, strong) SyncMessageSent* sent;
@property (readonly, strong) SyncMessageContacts* contacts;
@property (readonly, strong) SyncMessageGroups* groups;
@property (readonly, strong) SyncMessageRequest* request;

+ (SyncMessage*) defaultInstance;
- (SyncMessage*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (SyncMessageBuilder*) builder;
+ (SyncMessageBuilder*) builder;
+ (SyncMessageBuilder*) builderWithPrototype:(SyncMessage*) prototype;
- (SyncMessageBuilder*) toBuilder;

+ (SyncMessage*) parseFromData:(NSData*) data;
+ (SyncMessage*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (SyncMessage*) parseFromInputStream:(NSInputStream*) input;
+ (SyncMessage*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (SyncMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (SyncMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface SyncMessageSent : PBGeneratedMessage {
@private
  BOOL hasTimestamp_:1;
  BOOL hasDestination_:1;
  BOOL hasMessage_:1;
  UInt64 timestamp;
  NSString* destination;
  DataMessage* message;
}
- (BOOL) hasDestination;
- (BOOL) hasTimestamp;
- (BOOL) hasMessage;
@property (readonly, strong) NSString* destination;
@property (readonly) UInt64 timestamp;
@property (readonly, strong) DataMessage* message;

+ (SyncMessageSent*) defaultInstance;
- (SyncMessageSent*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (SyncMessageSentBuilder*) builder;
+ (SyncMessageSentBuilder*) builder;
+ (SyncMessageSentBuilder*) builderWithPrototype:(SyncMessageSent*) prototype;
- (SyncMessageSentBuilder*) toBuilder;

+ (SyncMessageSent*) parseFromData:(NSData*) data;
+ (SyncMessageSent*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (SyncMessageSent*) parseFromInputStream:(NSInputStream*) input;
+ (SyncMessageSent*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (SyncMessageSent*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (SyncMessageSent*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface SyncMessageSentBuilder : PBGeneratedMessageBuilder {
@private
  SyncMessageSent* result;
}

- (SyncMessageSent*) defaultInstance;

- (SyncMessageSentBuilder*) clear;
- (SyncMessageSentBuilder*) clone;

- (SyncMessageSent*) build;
- (SyncMessageSent*) buildPartial;

- (SyncMessageSentBuilder*) mergeFrom:(SyncMessageSent*) other;
- (SyncMessageSentBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (SyncMessageSentBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasDestination;
- (NSString*) destination;
- (SyncMessageSentBuilder*) setDestination:(NSString*) value;
- (SyncMessageSentBuilder*) clearDestination;

- (BOOL) hasTimestamp;
- (UInt64) timestamp;
- (SyncMessageSentBuilder*) setTimestamp:(UInt64) value;
- (SyncMessageSentBuilder*) clearTimestamp;

- (BOOL) hasMessage;
- (DataMessage*) message;
- (SyncMessageSentBuilder*) setMessage:(DataMessage*) value;
- (SyncMessageSentBuilder*) setMessageBuilder:(DataMessageBuilder*) builderForValue;
- (SyncMessageSentBuilder*) mergeMessage:(DataMessage*) value;
- (SyncMessageSentBuilder*) clearMessage;
@end

@interface SyncMessageContacts : PBGeneratedMessage {
@private
  BOOL hasBlob_:1;
  AttachmentPointer* blob;
}
- (BOOL) hasBlob;
@property (readonly, strong) AttachmentPointer* blob;

+ (SyncMessageContacts*) defaultInstance;
- (SyncMessageContacts*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (SyncMessageContactsBuilder*) builder;
+ (SyncMessageContactsBuilder*) builder;
+ (SyncMessageContactsBuilder*) builderWithPrototype:(SyncMessageContacts*) prototype;
- (SyncMessageContactsBuilder*) toBuilder;

+ (SyncMessageContacts*) parseFromData:(NSData*) data;
+ (SyncMessageContacts*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (SyncMessageContacts*) parseFromInputStream:(NSInputStream*) input;
+ (SyncMessageContacts*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (SyncMessageContacts*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (SyncMessageContacts*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface SyncMessageContactsBuilder : PBGeneratedMessageBuilder {
@private
  SyncMessageContacts* result;
}

- (SyncMessageContacts*) defaultInstance;

- (SyncMessageContactsBuilder*) clear;
- (SyncMessageContactsBuilder*) clone;

- (SyncMessageContacts*) build;
- (SyncMessageContacts*) buildPartial;

- (SyncMessageContactsBuilder*) mergeFrom:(SyncMessageContacts*) other;
- (SyncMessageContactsBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (SyncMessageContactsBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasBlob;
- (AttachmentPointer*) blob;
- (SyncMessageContactsBuilder*) setBlob:(AttachmentPointer*) value;
- (SyncMessageContactsBuilder*) setBlobBuilder:(AttachmentPointerBuilder*) builderForValue;
- (SyncMessageContactsBuilder*) mergeBlob:(AttachmentPointer*) value;
- (SyncMessageContactsBuilder*) clearBlob;
@end

@interface SyncMessageGroups : PBGeneratedMessage {
@private
  BOOL hasBlob_:1;
  AttachmentPointer* blob;
}
- (BOOL) hasBlob;
@property (readonly, strong) AttachmentPointer* blob;

+ (SyncMessageGroups*) defaultInstance;
- (SyncMessageGroups*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (SyncMessageGroupsBuilder*) builder;
+ (SyncMessageGroupsBuilder*) builder;
+ (SyncMessageGroupsBuilder*) builderWithPrototype:(SyncMessageGroups*) prototype;
- (SyncMessageGroupsBuilder*) toBuilder;

+ (SyncMessageGroups*) parseFromData:(NSData*) data;
+ (SyncMessageGroups*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (SyncMessageGroups*) parseFromInputStream:(NSInputStream*) input;
+ (SyncMessageGroups*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (SyncMessageGroups*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (SyncMessageGroups*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface SyncMessageGroupsBuilder : PBGeneratedMessageBuilder {
@private
  SyncMessageGroups* result;
}

- (SyncMessageGroups*) defaultInstance;

- (SyncMessageGroupsBuilder*) clear;
- (SyncMessageGroupsBuilder*) clone;

- (SyncMessageGroups*) build;
- (SyncMessageGroups*) buildPartial;

- (SyncMessageGroupsBuilder*) mergeFrom:(SyncMessageGroups*) other;
- (SyncMessageGroupsBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (SyncMessageGroupsBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasBlob;
- (AttachmentPointer*) blob;
- (SyncMessageGroupsBuilder*) setBlob:(AttachmentPointer*) value;
- (SyncMessageGroupsBuilder*) setBlobBuilder:(AttachmentPointerBuilder*) builderForValue;
- (SyncMessageGroupsBuilder*) mergeBlob:(AttachmentPointer*) value;
- (SyncMessageGroupsBuilder*) clearBlob;
@end

@interface SyncMessageRequest : PBGeneratedMessage {
@private
  BOOL hasType_:1;
  SyncMessageRequestType type;
}
- (BOOL) hasType;
@property (readonly) SyncMessageRequestType type;

+ (SyncMessageRequest*) defaultInstance;
- (SyncMessageRequest*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (SyncMessageRequestBuilder*) builder;
+ (SyncMessageRequestBuilder*) builder;
+ (SyncMessageRequestBuilder*) builderWithPrototype:(SyncMessageRequest*) prototype;
- (SyncMessageRequestBuilder*) toBuilder;

+ (SyncMessageRequest*) parseFromData:(NSData*) data;
+ (SyncMessageRequest*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (SyncMessageRequest*) parseFromInputStream:(NSInputStream*) input;
+ (SyncMessageRequest*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (SyncMessageRequest*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (SyncMessageRequest*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface SyncMessageRequestBuilder : PBGeneratedMessageBuilder {
@private
  SyncMessageRequest* result;
}

- (SyncMessageRequest*) defaultInstance;

- (SyncMessageRequestBuilder*) clear;
- (SyncMessageRequestBuilder*) clone;

- (SyncMessageRequest*) build;
- (SyncMessageRequest*) buildPartial;

- (SyncMessageRequestBuilder*) mergeFrom:(SyncMessageRequest*) other;
- (SyncMessageRequestBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (SyncMessageRequestBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasType;
- (SyncMessageRequestType) type;
- (SyncMessageRequestBuilder*) setType:(SyncMessageRequestType) value;
- (SyncMessageRequestBuilder*) clearType;
@end

@interface SyncMessageBuilder : PBGeneratedMessageBuilder {
@private
  SyncMessage* result;
}

- (SyncMessage*) defaultInstance;

- (SyncMessageBuilder*) clear;
- (SyncMessageBuilder*) clone;

- (SyncMessage*) build;
- (SyncMessage*) buildPartial;

- (SyncMessageBuilder*) mergeFrom:(SyncMessage*) other;
- (SyncMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (SyncMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasSent;
- (SyncMessageSent*) sent;
- (SyncMessageBuilder*) setSent:(SyncMessageSent*) value;
- (SyncMessageBuilder*) setSentBuilder:(SyncMessageSentBuilder*) builderForValue;
- (SyncMessageBuilder*) mergeSent:(SyncMessageSent*) value;
- (SyncMessageBuilder*) clearSent;

- (BOOL) hasContacts;
- (SyncMessageContacts*) contacts;
- (SyncMessageBuilder*) setContacts:(SyncMessageContacts*) value;
- (SyncMessageBuilder*) setContactsBuilder:(SyncMessageContactsBuilder*) builderForValue;
- (SyncMessageBuilder*) mergeContacts:(SyncMessageContacts*) value;
- (SyncMessageBuilder*) clearContacts;

- (BOOL) hasGroups;
- (SyncMessageGroups*) groups;
- (SyncMessageBuilder*) setGroups:(SyncMessageGroups*) value;
- (SyncMessageBuilder*) setGroupsBuilder:(SyncMessageGroupsBuilder*) builderForValue;
- (SyncMessageBuilder*) mergeGroups:(SyncMessageGroups*) value;
- (SyncMessageBuilder*) clearGroups;

- (BOOL) hasRequest;
- (SyncMessageRequest*) request;
- (SyncMessageBuilder*) setRequest:(SyncMessageRequest*) value;
- (SyncMessageBuilder*) setRequestBuilder:(SyncMessageRequestBuilder*) builderForValue;
- (SyncMessageBuilder*) mergeRequest:(SyncMessageRequest*) value;
- (SyncMessageBuilder*) clearRequest;
@end

@interface AttachmentPointer : PBGeneratedMessage {
@private
  BOOL hasId_:1;
  BOOL hasContentType_:1;
  BOOL hasKey_:1;
  BOOL hasThumbnail_:1;
  BOOL hasSize_:1;
  UInt64 id;
  NSString* contentType;
  NSData* key;
  NSData* thumbnail;
  UInt32 size;
}
- (BOOL) hasId;
- (BOOL) hasContentType;
- (BOOL) hasKey;
- (BOOL) hasSize;
- (BOOL) hasThumbnail;
@property (readonly) UInt64 id;
@property (readonly, strong) NSString* contentType;
@property (readonly, strong) NSData* key;
@property (readonly) UInt32 size;
@property (readonly, strong) NSData* thumbnail;

+ (AttachmentPointer*) defaultInstance;
- (AttachmentPointer*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (AttachmentPointerBuilder*) builder;
+ (AttachmentPointerBuilder*) builder;
+ (AttachmentPointerBuilder*) builderWithPrototype:(AttachmentPointer*) prototype;
- (AttachmentPointerBuilder*) toBuilder;

+ (AttachmentPointer*) parseFromData:(NSData*) data;
+ (AttachmentPointer*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (AttachmentPointer*) parseFromInputStream:(NSInputStream*) input;
+ (AttachmentPointer*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (AttachmentPointer*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (AttachmentPointer*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface AttachmentPointerBuilder : PBGeneratedMessageBuilder {
@private
  AttachmentPointer* result;
}

- (AttachmentPointer*) defaultInstance;

- (AttachmentPointerBuilder*) clear;
- (AttachmentPointerBuilder*) clone;

- (AttachmentPointer*) build;
- (AttachmentPointer*) buildPartial;

- (AttachmentPointerBuilder*) mergeFrom:(AttachmentPointer*) other;
- (AttachmentPointerBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (AttachmentPointerBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasId;
- (UInt64) id;
- (AttachmentPointerBuilder*) setId:(UInt64) value;
- (AttachmentPointerBuilder*) clearId;

- (BOOL) hasContentType;
- (NSString*) contentType;
- (AttachmentPointerBuilder*) setContentType:(NSString*) value;
- (AttachmentPointerBuilder*) clearContentType;

- (BOOL) hasKey;
- (NSData*) key;
- (AttachmentPointerBuilder*) setKey:(NSData*) value;
- (AttachmentPointerBuilder*) clearKey;

- (BOOL) hasSize;
- (UInt32) size;
- (AttachmentPointerBuilder*) setSize:(UInt32) value;
- (AttachmentPointerBuilder*) clearSize;

- (BOOL) hasThumbnail;
- (NSData*) thumbnail;
- (AttachmentPointerBuilder*) setThumbnail:(NSData*) value;
- (AttachmentPointerBuilder*) clearThumbnail;
@end

@interface GroupContext : PBGeneratedMessage {
@private
  BOOL hasName_:1;
  BOOL hasAvatar_:1;
  BOOL hasId_:1;
  BOOL hasType_:1;
  NSString* name;
  AttachmentPointer* avatar;
  NSData* id;
  GroupContextType type;
  NSMutableArray * membersArray;
}
- (BOOL) hasId;
- (BOOL) hasType;
- (BOOL) hasName;
- (BOOL) hasAvatar;
@property (readonly, strong) NSData* id;
@property (readonly) GroupContextType type;
@property (readonly, strong) NSString* name;
@property (readonly, strong) PBArray * members;
@property (readonly, strong) AttachmentPointer* avatar;
- (NSString*)membersAtIndex:(NSUInteger)index;

+ (GroupContext*) defaultInstance;
- (GroupContext*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (GroupContextBuilder*) builder;
+ (GroupContextBuilder*) builder;
+ (GroupContextBuilder*) builderWithPrototype:(GroupContext*) prototype;
- (GroupContextBuilder*) toBuilder;

+ (GroupContext*) parseFromData:(NSData*) data;
+ (GroupContext*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (GroupContext*) parseFromInputStream:(NSInputStream*) input;
+ (GroupContext*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (GroupContext*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (GroupContext*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface GroupContextBuilder : PBGeneratedMessageBuilder {
@private
  GroupContext* result;
}

- (GroupContext*) defaultInstance;

- (GroupContextBuilder*) clear;
- (GroupContextBuilder*) clone;

- (GroupContext*) build;
- (GroupContext*) buildPartial;

- (GroupContextBuilder*) mergeFrom:(GroupContext*) other;
- (GroupContextBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (GroupContextBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasId;
- (NSData*) id;
- (GroupContextBuilder*) setId:(NSData*) value;
- (GroupContextBuilder*) clearId;

- (BOOL) hasType;
- (GroupContextType) type;
- (GroupContextBuilder*) setType:(GroupContextType) value;
- (GroupContextBuilder*) clearType;

- (BOOL) hasName;
- (NSString*) name;
- (GroupContextBuilder*) setName:(NSString*) value;
- (GroupContextBuilder*) clearName;

- (NSMutableArray *)members;
- (NSString*)membersAtIndex:(NSUInteger)index;
- (GroupContextBuilder *)addMembers:(NSString*)value;
- (GroupContextBuilder *)setMembersArray:(NSArray *)array;
- (GroupContextBuilder *)clearMembers;

- (BOOL) hasAvatar;
- (AttachmentPointer*) avatar;
- (GroupContextBuilder*) setAvatar:(AttachmentPointer*) value;
- (GroupContextBuilder*) setAvatarBuilder:(AttachmentPointerBuilder*) builderForValue;
- (GroupContextBuilder*) mergeAvatar:(AttachmentPointer*) value;
- (GroupContextBuilder*) clearAvatar;
@end

@interface ContactDetails : PBGeneratedMessage {
@private
  BOOL hasNumber_:1;
  BOOL hasName_:1;
  BOOL hasAvatar_:1;
  NSString* number;
  NSString* name;
  ContactDetailsAvatar* avatar;
}
- (BOOL) hasNumber;
- (BOOL) hasName;
- (BOOL) hasAvatar;
@property (readonly, strong) NSString* number;
@property (readonly, strong) NSString* name;
@property (readonly, strong) ContactDetailsAvatar* avatar;

+ (ContactDetails*) defaultInstance;
- (ContactDetails*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (ContactDetailsBuilder*) builder;
+ (ContactDetailsBuilder*) builder;
+ (ContactDetailsBuilder*) builderWithPrototype:(ContactDetails*) prototype;
- (ContactDetailsBuilder*) toBuilder;

+ (ContactDetails*) parseFromData:(NSData*) data;
+ (ContactDetails*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (ContactDetails*) parseFromInputStream:(NSInputStream*) input;
+ (ContactDetails*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (ContactDetails*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (ContactDetails*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface ContactDetailsAvatar : PBGeneratedMessage {
@private
  BOOL hasContentType_:1;
  BOOL hasLength_:1;
  NSString* contentType;
  UInt32 length;
}
- (BOOL) hasContentType;
- (BOOL) hasLength;
@property (readonly, strong) NSString* contentType;
@property (readonly) UInt32 length;

+ (ContactDetailsAvatar*) defaultInstance;
- (ContactDetailsAvatar*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (ContactDetailsAvatarBuilder*) builder;
+ (ContactDetailsAvatarBuilder*) builder;
+ (ContactDetailsAvatarBuilder*) builderWithPrototype:(ContactDetailsAvatar*) prototype;
- (ContactDetailsAvatarBuilder*) toBuilder;

+ (ContactDetailsAvatar*) parseFromData:(NSData*) data;
+ (ContactDetailsAvatar*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (ContactDetailsAvatar*) parseFromInputStream:(NSInputStream*) input;
+ (ContactDetailsAvatar*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (ContactDetailsAvatar*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (ContactDetailsAvatar*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface ContactDetailsAvatarBuilder : PBGeneratedMessageBuilder {
@private
  ContactDetailsAvatar* result;
}

- (ContactDetailsAvatar*) defaultInstance;

- (ContactDetailsAvatarBuilder*) clear;
- (ContactDetailsAvatarBuilder*) clone;

- (ContactDetailsAvatar*) build;
- (ContactDetailsAvatar*) buildPartial;

- (ContactDetailsAvatarBuilder*) mergeFrom:(ContactDetailsAvatar*) other;
- (ContactDetailsAvatarBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (ContactDetailsAvatarBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasContentType;
- (NSString*) contentType;
- (ContactDetailsAvatarBuilder*) setContentType:(NSString*) value;
- (ContactDetailsAvatarBuilder*) clearContentType;

- (BOOL) hasLength;
- (UInt32) length;
- (ContactDetailsAvatarBuilder*) setLength:(UInt32) value;
- (ContactDetailsAvatarBuilder*) clearLength;
@end

@interface ContactDetailsBuilder : PBGeneratedMessageBuilder {
@private
  ContactDetails* result;
}

- (ContactDetails*) defaultInstance;

- (ContactDetailsBuilder*) clear;
- (ContactDetailsBuilder*) clone;

- (ContactDetails*) build;
- (ContactDetails*) buildPartial;

- (ContactDetailsBuilder*) mergeFrom:(ContactDetails*) other;
- (ContactDetailsBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (ContactDetailsBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasNumber;
- (NSString*) number;
- (ContactDetailsBuilder*) setNumber:(NSString*) value;
- (ContactDetailsBuilder*) clearNumber;

- (BOOL) hasName;
- (NSString*) name;
- (ContactDetailsBuilder*) setName:(NSString*) value;
- (ContactDetailsBuilder*) clearName;

- (BOOL) hasAvatar;
- (ContactDetailsAvatar*) avatar;
- (ContactDetailsBuilder*) setAvatar:(ContactDetailsAvatar*) value;
- (ContactDetailsBuilder*) setAvatarBuilder:(ContactDetailsAvatarBuilder*) builderForValue;
- (ContactDetailsBuilder*) mergeAvatar:(ContactDetailsAvatar*) value;
- (ContactDetailsBuilder*) clearAvatar;
@end

@interface GroupDetails : PBGeneratedMessage {
@private
  BOOL hasName_:1;
  BOOL hasAvatar_:1;
  BOOL hasId_:1;
  NSString* name;
  GroupDetailsAvatar* avatar;
  NSData* id;
  NSMutableArray * membersArray;
}
- (BOOL) hasId;
- (BOOL) hasName;
- (BOOL) hasAvatar;
@property (readonly, strong) NSData* id;
@property (readonly, strong) NSString* name;
@property (readonly, strong) PBArray * members;
@property (readonly, strong) GroupDetailsAvatar* avatar;
- (NSString*)membersAtIndex:(NSUInteger)index;

+ (GroupDetails*) defaultInstance;
- (GroupDetails*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (GroupDetailsBuilder*) builder;
+ (GroupDetailsBuilder*) builder;
+ (GroupDetailsBuilder*) builderWithPrototype:(GroupDetails*) prototype;
- (GroupDetailsBuilder*) toBuilder;

+ (GroupDetails*) parseFromData:(NSData*) data;
+ (GroupDetails*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (GroupDetails*) parseFromInputStream:(NSInputStream*) input;
+ (GroupDetails*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (GroupDetails*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (GroupDetails*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface GroupDetailsAvatar : PBGeneratedMessage {
@private
  BOOL hasContentType_:1;
  BOOL hasLength_:1;
  NSString* contentType;
  UInt32 length;
}
- (BOOL) hasContentType;
- (BOOL) hasLength;
@property (readonly, strong) NSString* contentType;
@property (readonly) UInt32 length;

+ (GroupDetailsAvatar*) defaultInstance;
- (GroupDetailsAvatar*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (GroupDetailsAvatarBuilder*) builder;
+ (GroupDetailsAvatarBuilder*) builder;
+ (GroupDetailsAvatarBuilder*) builderWithPrototype:(GroupDetailsAvatar*) prototype;
- (GroupDetailsAvatarBuilder*) toBuilder;

+ (GroupDetailsAvatar*) parseFromData:(NSData*) data;
+ (GroupDetailsAvatar*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (GroupDetailsAvatar*) parseFromInputStream:(NSInputStream*) input;
+ (GroupDetailsAvatar*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (GroupDetailsAvatar*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (GroupDetailsAvatar*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface GroupDetailsAvatarBuilder : PBGeneratedMessageBuilder {
@private
  GroupDetailsAvatar* result;
}

- (GroupDetailsAvatar*) defaultInstance;

- (GroupDetailsAvatarBuilder*) clear;
- (GroupDetailsAvatarBuilder*) clone;

- (GroupDetailsAvatar*) build;
- (GroupDetailsAvatar*) buildPartial;

- (GroupDetailsAvatarBuilder*) mergeFrom:(GroupDetailsAvatar*) other;
- (GroupDetailsAvatarBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (GroupDetailsAvatarBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasContentType;
- (NSString*) contentType;
- (GroupDetailsAvatarBuilder*) setContentType:(NSString*) value;
- (GroupDetailsAvatarBuilder*) clearContentType;

- (BOOL) hasLength;
- (UInt32) length;
- (GroupDetailsAvatarBuilder*) setLength:(UInt32) value;
- (GroupDetailsAvatarBuilder*) clearLength;
@end

@interface GroupDetailsBuilder : PBGeneratedMessageBuilder {
@private
  GroupDetails* result;
}

- (GroupDetails*) defaultInstance;

- (GroupDetailsBuilder*) clear;
- (GroupDetailsBuilder*) clone;

- (GroupDetails*) build;
- (GroupDetails*) buildPartial;

- (GroupDetailsBuilder*) mergeFrom:(GroupDetails*) other;
- (GroupDetailsBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (GroupDetailsBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasId;
- (NSData*) id;
- (GroupDetailsBuilder*) setId:(NSData*) value;
- (GroupDetailsBuilder*) clearId;

- (BOOL) hasName;
- (NSString*) name;
- (GroupDetailsBuilder*) setName:(NSString*) value;
- (GroupDetailsBuilder*) clearName;

- (NSMutableArray *)members;
- (NSString*)membersAtIndex:(NSUInteger)index;
- (GroupDetailsBuilder *)addMembers:(NSString*)value;
- (GroupDetailsBuilder *)setMembersArray:(NSArray *)array;
- (GroupDetailsBuilder *)clearMembers;

- (BOOL) hasAvatar;
- (GroupDetailsAvatar*) avatar;
- (GroupDetailsBuilder*) setAvatar:(GroupDetailsAvatar*) value;
- (GroupDetailsBuilder*) setAvatarBuilder:(GroupDetailsAvatarBuilder*) builderForValue;
- (GroupDetailsBuilder*) mergeAvatar:(GroupDetailsAvatar*) value;
- (GroupDetailsBuilder*) clearAvatar;
@end


// @@protoc_insertion_point(global_scope)
