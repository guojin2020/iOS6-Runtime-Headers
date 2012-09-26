/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSXPCConnection, NSLock, NSXPCInterface, NSMutableDictionary;

@interface _NSXPCDistantObject : NSObject <NSXPCProxyCreating, NSSecureCoding> {
    NSXPCConnection *_connection;
    NSXPCInterface *_remoteInterface;
    NSMutableDictionary *_knownSelectors;
    NSLock *_selectorLock;
    unsigned long long _proxyNumber;
    BOOL _exported;
}

@property unsigned long long _proxyNumber;
@property(retain) NSXPCConnection * _connection;
@property(retain) NSXPCInterface * _remoteInterface;
@property BOOL _exported;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (BOOL)_exported;
- (id)_remoteInterface;
- (unsigned long long)_proxyNumber;
- (void)set_remoteInterface:(id)arg1;
- (id)remoteObjectProxyWithTimeout:(double)arg1 errorHandler:(id)arg2;
- (id)remoteObjectProxyWithErrorHandler:(id)arg1;
- (id)remoteObjectProxy;
- (id)_initWithConnection:(id)arg1 proxyNumber:(unsigned long long)arg2 interface:(id)arg3;
- (void)set_exported:(BOOL)arg1;
- (void)set_proxyNumber:(unsigned long long)arg1;
- (void)set_connection:(id)arg1;
- (id)_connection;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end