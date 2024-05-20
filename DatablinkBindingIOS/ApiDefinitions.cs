using System;
using System.Runtime.InteropServices;
using CoreFoundation;
using Foundation;
using ObjCRuntime;
using Security;

namespace LibTest
{
    // @interface AppInfo : NSObject
    [BaseType(typeof(NSObject))]
    interface AppInfo
    {
        // -(int)getPinErrors;
        [Export("getPinErrors")]
        int PinErrors { get; }

        // -(void)setPinErrors:(int)pinErrors;
        [Export("setPinErrors:")]
        void SetPinErrors(int pinErrors);

        // -(int)getDefinedPin;
        [Export("getDefinedPin")]
        int DefinedPin { get; }

        // -(void)setPinDefined:(int)definedPin;
        [Export("setPinDefined:")]
        void SetPinDefined(int definedPin);
    }

    // @interface Blob : NSObject
    [BaseType(typeof(NSObject))]
    interface Blob
    {
        // -(id)initWithBlob:(NSString *)blob;
        [Export("initWithBlob:")]
        NativeHandle Constructor(string blob);

        // -(void)setBlob:(NSString *)blob;
        [Export("setBlob:")]
        void SetBlob(string blob);

        // -(NSString *)getBlob;
        [Export("getBlob")]
        string GetBlob { get; }
    }

    // @protocol Constants <NSObject>
    /*
	Check whether adding [Model] to this declaration is appropriate.
	[Model] is used to generate a C# class that implements this protocol,
	and might be useful for protocols that consumers are supposed to implement,
	since consumers can subclass the generated class instead of implementing
	the generated interface. If consumers are not supposed to implement this
	protocol, then [Model] is redundant and will generate code that will never
	be used.
	*/
    [Protocol]
    [BaseType(typeof(NSObject))]
    interface Constants
    {
    }

    // @protocol ConstantsErrors <NSObject>
    /*
	Check whether adding [Model] to this declaration is appropriate.
	[Model] is used to generate a C# class that implements this protocol,
	and might be useful for protocols that consumers are supposed to implement,
	since consumers can subclass the generated class instead of implementing
	the generated interface. If consumers are not supposed to implement this
	protocol, then [Model] is redundant and will generate code that will never
	be used.
	*/
    [Protocol]
    [BaseType(typeof(NSObject))]
    interface ConstantsErrors
    {
    }

    // @interface LifeTime : NSObject
    [BaseType(typeof(NSObject))]
    interface LifeTime
    {
        // -(id)initWithPercentage:(float)percentage;
        [Export("initWithPercentage:")]
        NativeHandle Constructor(float percentage);

        // -(float)getPercentage;
        [Export("getPercentage")]
        float Percentage { get; }

        // -(void)setPercentage:(float)percentage;
        [Export("setPercentage:")]
        void SetPercentage(float percentage);
    }

    // @interface Info : NSObject
    [BaseType(typeof(NSObject))]
    interface Info
    {
        // -(int)getStatus;
        [Export("getStatus")]
        int Status { get; }

        // -(NSString *)getConfigVersion;
        [Export("getConfigVersion")]
        string ConfigVersion { get; }

        // -(NSString *)getInstallationId;
        [Export("getInstallationId")]
        string InstallationId { get; }

        // -(int)getDeviationTime;
        [Export("getDeviationTime")]
        int DeviationTime { get; }

        // -(NSString *)getSerialNumber;
        [Export("getSerialNumber")]
        string SerialNumber { get; }

        // -(int)getPinSize;
        [Export("getPinSize")]
        int PinSize { get; }

        // -(int)getPinErrors;
        [Export("getPinErrors")]
        int PinErrors { get; }

        // -(int)getMaxPinErrors;
        [Export("getMaxPinErrors")]
        int MaxPinErrors { get; }

        // -(int)getOtpSize;
        [Export("getOtpSize")]
        int OtpSize { get; }

        // -(int)getOtpTimestep;
        [Export("getOtpTimestep")]
        int OtpTimestep { get; }

        // -(int)getSignatureTimestep;
        [Export("getSignatureTimestep")]
        int SignatureTimestep { get; }

        // -(int)getSignatureSize;
        [Export("getSignatureSize")]
        int SignatureSize { get; }

        // -(int)getResponseTimestep;
        [Export("getResponseTimestep")]
        int ResponseTimestep { get; }

        // -(int)getResponseSize;
        [Export("getResponseSize")]
        int ResponseSize { get; }

        // -(NSString *)getLabel;
        [Export("getLabel")]
        string Label { get; }

        // -(int)getPinContentType;
        [Export("getPinContentType")]
        int PinContentType { get; }

        // -(int)getPinMode;
        [Export("getPinMode")]
        int PinMode { get; }

        // -(int)getPinValidationType;
        [Export("getPinValidationType")]
        int PinValidationType { get; }

        // -(int)getPinDefined;
        [Export("getPinDefined")]
        int PinDefined { get; }

        // -(NSString *)getActivationUrl;
        [Export("getActivationUrl")]
        string ActivationUrl { get; }

        // -(NSString *)getPushId;
        [Export("getPushId")]
        string PushId { get; }

        // -(void)setPinSize:(int)pinSize;
        [Export("setPinSize:")]
        void SetPinSize(int pinSize);

        // -(void)setPinMode:(int)pinMode;
        [Export("setPinMode:")]
        void SetPinMode(int pinMode);

        // -(void)setPinValidationType:(int)pinQuality;
        [Export("setPinValidationType:")]
        void SetPinValidationType(int pinQuality);

        // -(void)setPinErrors:(int)pinTotalErrors;
        [Export("setPinErrors:")]
        void SetPinErrors(int pinTotalErrors);

        // -(void)setPinContentType:(int)pinType;
        [Export("setPinContentType:")]
        void SetPinContentType(int pinType);

        // -(void)setMaxPinErrors:(int)maxSuccessivePinErrors;
        [Export("setMaxPinErrors:")]
        void SetMaxPinErrors(int maxSuccessivePinErrors);

        // -(void)setOtpSize:(int)otpSize;
        [Export("setOtpSize:")]
        void SetOtpSize(int otpSize);

        // -(void)setOtpTimestep:(int)timestepOtp;
        [Export("setOtpTimestep:")]
        void SetOtpTimestep(int timestepOtp);

        // -(void)setDeviationTime:(int)deviationTime;
        [Export("setDeviationTime:")]
        void SetDeviationTime(int deviationTime);

        // -(void)setSignatureTimestep:(int)signatureTimestep;
        [Export("setSignatureTimestep:")]
        void SetSignatureTimestep(int signatureTimestep);

        // -(void)setSignatureSize:(int)signatureSize;
        [Export("setSignatureSize:")]
        void SetSignatureSize(int signatureSize);

        // -(void)setStatus:(int)status;
        [Export("setStatus:")]
        void SetStatus(int status);

        // -(void)setConfigVersion:(NSString *)configVersion;
        [Export("setConfigVersion:")]
        void SetConfigVersion(string configVersion);

        // -(void)setSerialNumber:(NSString *)serialNumber;
        [Export("setSerialNumber:")]
        void SetSerialNumber(string serialNumber);

        // -(void)setLabel:(NSString *)tokenLabel;
        [Export("setLabel:")]
        void SetLabel(string tokenLabel);

        // -(void)setPushId:(NSString *)pushId;
        [Export("setPushId:")]
        void SetPushId(string pushId);

        // -(void)setActivationUrl:(NSString *)urlActivation;
        [Export("setActivationUrl:")]
        void SetActivationUrl(string urlActivation);

        // -(void)setInstallationId:(NSString *)installationId;
        [Export("setInstallationId:")]
        void SetInstallationId(string installationId);

        // -(void)setResponseTimestep:(int)responseTimestep;
        [Export("setResponseTimestep:")]
        void SetResponseTimestep(int responseTimestep);

        // -(void)setResponseSize:(int)responseSize;
        [Export("setResponseSize:")]
        void SetResponseSize(int responseSize);

        // -(void)setPinDefined:(int)definedPin;
        [Export("setPinDefined:")]
        void SetPinDefined(int definedPin);
    }

    // @interface AppBlob : NSObject
    [BaseType(typeof(NSObject))]
    interface AppBlob
    {
        // -(id)initWithBlob:(NSString *)blob;
        [Export("initWithBlob:")]
        NativeHandle Constructor(string blob);

        // -(void)setBlob:(NSString *)blob;
        [Export("setBlob:")]
        void SetBlob(string blob);

        // -(NSString *)getBlob;
        [Export("getBlob")]
        string GetBlob { get; }
    }

    // @interface EmbeddedSdk : NSObject
    [BaseType(typeof(NSObject))]
    interface EmbeddedSdk
    {
        // -(NSString *)getVersion;
        [Export("getVersion")]
        string Version { get; }

        // -(int)init:(NSData *)customSecurityKey;
        [Export("init:")]
        int Init(NSData customSecurityKey);

        // -(int)init:(NSData *)customSecurityKey customIdentifier:(NSString *)customIdentifier;
        [Export("init:customIdentifier:")]
        int Init(NSData customSecurityKey, string customIdentifier);

        // -(int)getInfo:(Blob *)blob info:(Info *)info;
        [Export("getInfo:info:")]
        int GetInfo(Blob blob, Info info);

        // -(int)getLifeTimeOtp:(Blob *)blob lifeTime:(LifeTime *)lifeTime;
        [Export("getLifeTimeOtp:lifeTime:")]
        int GetLifeTimeOtp(Blob blob, LifeTime lifeTime);

        // -(int)getLifeTimeSignature:(Blob *)blob lifeTime:(LifeTime *)lifeTime;
        [Export("getLifeTimeSignature:lifeTime:")]
        int GetLifeTimeSignature(Blob blob, LifeTime lifeTime);

        // -(int)getLifeTimeChallengeResponse:(Blob *)blob lifeTime:(LifeTime *)lifeTime;
        [Export("getLifeTimeChallengeResponse:lifeTime:")]
        int GetLifeTimeChallengeResponse(Blob blob, LifeTime lifeTime);

        // -(int)generateNewBlob:(Blob *)blob;
        [Export("generateNewBlob:")]
        int GenerateNewBlob(Blob blob);

        // -(int)generatePacketActivateStep1:(Blob *)blob parameters:(NSMutableArray<NSString *> *)params packet:(NSMutableString *)packet;
        [Export("generatePacketActivateStep1:parameters:packet:")]
        int GeneratePacketActivateStep1(Blob blob, NSMutableArray<NSString> @params, NSMutableString packet);

        // -(int)generatePacketActivateStep2:(Blob *)blob responseStep1:(NSString *)responseStep1 parameters:(NSMutableArray<NSString *> *)params packet:(NSMutableString *)packet;
        [Export("generatePacketActivateStep2:responseStep1:parameters:packet:")]
        int GeneratePacketActivateStep2(Blob blob, string responseStep1, NSMutableArray<NSString> @params, NSMutableString packet);

        // -(int)activate:(Blob *)blob responseStep2:(NSString *)responseStep2;
        [Export("activate:responseStep2:")]
        int Activate(Blob blob, string responseStep2);

        // -(int)generatePacketSyncAndUpdate:(Blob *)blob parameters:(NSMutableArray<NSString *> *)params packet:(NSMutableString *)packet;
        [Export("generatePacketSyncAndUpdate:parameters:packet:")]
        int GeneratePacketSyncAndUpdate(Blob blob, NSMutableArray<NSString> @params, NSMutableString packet);

        // -(int)generatePacketSyncTime:(Blob *)blob parameters:(NSMutableArray<NSString *> *)params packet:(NSMutableString *)packet;
        [Export("generatePacketSyncTime:parameters:packet:")]
        int GeneratePacketSyncTime(Blob blob, NSMutableArray<NSString> @params, NSMutableString packet);

        // -(int)syncAndUpdate:(Blob *)blob responseSyncAndUpdate:(NSString *)responseSyncAndUpdate;
        [Export("syncAndUpdate:responseSyncAndUpdate:")]
        int SyncAndUpdate(Blob blob, string responseSyncAndUpdate);

        // -(int)syncTime:(Blob *)blob responseSyncTime:(NSString *)responseSyncTime;
        [Export("syncTime:responseSyncTime:")]
        int SyncTime(Blob blob, string responseSyncTime);

        // -(int)generatePacketMigrate:(Blob *)blob parameters:(NSMutableArray<NSString *> *)params packet:(NSMutableString *)packet;
        [Export("generatePacketMigrate:parameters:packet:")]
        int GeneratePacketMigrate(Blob blob, NSMutableArray<NSString> @params, NSMutableString packet);

        // -(int)migrate:(Blob *)blob responseMigrate:(NSString *)responseMigrate;
        [Export("migrate:responseMigrate:")]
        int Migrate(Blob blob, string responseMigrate);

        // -(int)generateOtp:(Blob *)blob otp:(NSMutableString *)otp;
        [Export("generateOtp:otp:")]
        int GenerateOtp(Blob blob, NSMutableString otp);

        // -(int)setAccessPasswordPin:(Blob *)blob accessPasswordPin:(NSString *)accessPasswordPin;
        [Export("setAccessPasswordPin:accessPasswordPin:")]
        int SetAccessPasswordPin(Blob blob, string accessPasswordPin);

        // -(int)checkAccessPasswordPin:(Blob *)blob accessPasswordPin:(NSString *)accessPasswordPin;
        [Export("checkAccessPasswordPin:accessPasswordPin:")]
        int CheckAccessPasswordPin(Blob blob, string accessPasswordPin);

        // -(int)setLabel:(Blob *)blob label:(NSString *)label;
        [Export("setLabel:label:")]
        int SetLabel(Blob blob, string label);

        // -(int)generatePacketBlock:(Blob *)blob parameters:(NSMutableArray<NSString *> *)params packet:(NSMutableString *)packet;
        [Export("generatePacketBlock:parameters:packet:")]
        int GeneratePacketBlock(Blob blob, NSMutableArray<NSString> @params, NSMutableString packet);

        // -(int)block:(Blob *)blob reponseBlock:(NSString *)reponseBlock;
        [Export("block:reponseBlock:")]
        int Block(Blob blob, string reponseBlock);

        // -(int)unblock:(Blob *)blob responseUnblock:(NSString *)responseUnblock;
        [Export("unblock:responseUnblock:")]
        int Unblock(Blob blob, string responseUnblock);

        // -(int)generatePacketUnblock:(Blob *)blob parameters:(NSMutableArray<NSString *> *)params packet:(NSMutableString *)packet;
        [Export("generatePacketUnblock:parameters:packet:")]
        int GeneratePacketUnblock(Blob blob, NSMutableArray<NSString> @params, NSMutableString packet);

        // -(int)parseQrCodeData:(Blob *)blob qrCodeInfo:(NSString *)qrCodeInfo qrCodeCommandType:(NSMutableString *)qrCodeCommandType dataList:(NSMutableArray<NSString *> *)dataList;
        [Export("parseQrCodeData:qrCodeInfo:qrCodeCommandType:dataList:")]
        int ParseQrCodeData(Blob blob, string qrCodeInfo, NSMutableString qrCodeCommandType, NSMutableArray<NSString> dataList);

        // -(int)generateSignatureByQrCode:(Blob *)blob qrCodeInfo:(NSString *)qrCodeInfo signature:(NSMutableString *)signature;
        [Export("generateSignatureByQrCode:qrCodeInfo:signature:")]
        int GenerateSignatureByQrCode(Blob blob, string qrCodeInfo, NSMutableString signature);

        // -(int)generateChallengeResponse:(Blob *)ioBlob challenge:(NSString *)challenge response:(NSMutableString *)response;
        [Export("generateChallengeResponse:challenge:response:")]
        int GenerateChallengeResponse(Blob ioBlob, string challenge, NSMutableString response);

        // -(int)generateChallengeResponseByQrCode:(Blob *)blob qrCodeInfo:(NSString *)qrCodeInfo response:(NSMutableString *)response;
        [Export("generateChallengeResponseByQrCode:qrCodeInfo:response:")]
        int GenerateChallengeResponseByQrCode(Blob blob, string qrCodeInfo, NSMutableString response);

        // -(int)parsePushData:(Blob *)blob pushComand:(NSString *)pushComand pushCommandType:(NSMutableString *)pushCommandType transactionId:(NSMutableString *)transactionId dataList:(NSMutableArray<NSString *> *)dataList;
        [Export("parsePushData:pushComand:pushCommandType:transactionId:dataList:")]
        int ParsePushData(Blob blob, string pushComand, NSMutableString pushCommandType, NSMutableString transactionId, NSMutableArray<NSString> dataList);

        // -(int)generatePacketPushValidate:(Blob *)blob operationRefused:(BOOL)operationRefused pushInfo:(NSString *)pushInfo pushCommandType:(NSMutableString *)pushCommandType packet:(NSMutableString *)packet;
        [Export("generatePacketPushValidate:operationRefused:pushInfo:pushCommandType:packet:")]
        int GeneratePacketPushValidate(Blob blob, bool operationRefused, string pushInfo, NSMutableString pushCommandType, NSMutableString packet);

        // -(int)generatePacketPushRegister:(Blob *)blob pushId:(NSString *)pushId platform:(NSString *)platform language:(NSString *)language packet:(NSMutableString *)packet;
        [Export("generatePacketPushRegister:pushId:platform:language:packet:")]
        int GeneratePacketPushRegister(Blob blob, string pushId, string platform, string language, NSMutableString packet);

        // -(int)disableAccessPasswordPin:(Blob *)blob;
        [Export("disableAccessPasswordPin:")]
        int DisableAccessPasswordPin(Blob blob);

        // -(int)parseResultPacketPushValidate:(NSString *)responsePushValidate dataList:(NSMutableArray<NSString *> *)dataList;
        [Export("parseResultPacketPushValidate:dataList:")]
        int ParseResultPacketPushValidate(string responsePushValidate, NSMutableArray<NSString> dataList);

        // -(int)parseResultPacketPushRegister:(NSString *)responsePushRegister dataList:(NSMutableArray<NSString *> *)dataList;
        [Export("parseResultPacketPushRegister:dataList:")]
        int ParseResultPacketPushRegister(string responsePushRegister, NSMutableArray<NSString> dataList);

        // -(int)getActivationCredentialsQrCode:(NSString *)qrCode activationCredentials:(NSMutableArray<NSString *> *)activationCredentials;
        [Export("getActivationCredentialsQrCode:activationCredentials:")]
        int GetActivationCredentialsQrCode(string qrCode, NSMutableArray<NSString> activationCredentials);

        // -(int)extractAdditionalDataCommunication:(NSString *)responseDataCommunication dataList:(NSMutableArray<NSString *> *)dataList;
        [Export("extractAdditionalDataCommunication:dataList:")]
        int ExtractAdditionalDataCommunication(string responseDataCommunication, NSMutableArray<NSString> dataList);

        // -(int)generateNewAppBlob:(AppBlob *)blob __attribute__((deprecated("")));
        [Export("generateNewAppBlob:")]
        int GenerateNewAppBlob(AppBlob blob);

        // -(int)checkAccessPasswordPinApp:(AppBlob *)blob accessPasswordPin:(NSString *)accessPasswordPin __attribute__((deprecated("")));
        [Export("checkAccessPasswordPinApp:accessPasswordPin:")]
        int CheckAccessPasswordPinApp(AppBlob blob, string accessPasswordPin);

        // -(int)setAccessPasswordPinApp:(AppBlob *)blob accessPasswordPin:(NSString *)accessPasswordPin __attribute__((deprecated("")));
        [Export("setAccessPasswordPinApp:accessPasswordPin:")]
        int SetAccessPasswordPinApp(AppBlob blob, string accessPasswordPin);

        // -(int)getInfoApp:(AppBlob *)blob info:(AppInfo *)info __attribute__((deprecated("")));
        [Export("getInfoApp:info:")]
        int GetInfoApp(AppBlob blob, AppInfo info);

        // -(int)generatePacketGenericRequest:(NSMutableArray<NSString *> *)params packet:(NSMutableString *)packet;
        [Export("generatePacketGenericRequest:packet:")]
        int GeneratePacketGenericRequest(NSMutableArray<NSString> @params, NSMutableString packet);

        // -(int)parseGenericResponse:(NSString *)responseGenericRequest parameters:(NSMutableArray<NSString *> *)params;
        [Export("parseGenericResponse:parameters:")]
        int ParseGenericResponse(string responseGenericRequest, NSMutableArray<NSString> @params);

        // -(int)generateActivationCredentialsQrCode:(NSArray *)activationCredentials qrCode:(NSMutableString *)qrCode;
        [Export("generateActivationCredentialsQrCode:qrCode:")]
        int GenerateActivationCredentialsQrCode(NSObject[] activationCredentials, NSMutableString qrCode);

        // -(int)setActivationUrl:(Blob *)blob activationUrl:(NSString *)activationUrl;
        [Export("setActivationUrl:activationUrl:")]
        int SetActivationUrl(Blob blob, string activationUrl);

        // -(int)setPushId:(Blob *)blob pushId:(NSString *)pushId;
        [Export("setPushId:pushId:")]
        int SetPushId(Blob blob, string pushId);

        // -(int)generatePacketSyncConfig:(NSMutableArray<NSString *> *)params packet:(NSMutableString *)packet;
        [Export("generatePacketSyncConfig:packet:")]
        int GeneratePacketSyncConfig(NSMutableArray<NSString> @params, NSMutableString packet);

        // -(int)parseSyncConfigResponse:(NSString *)responseSyncResponseRequest dataListConfig:(NSMutableArray<NSString *> *)dataListConfig;
        [Export("parseSyncConfigResponse:dataListConfig:")]
        int ParseSyncConfigResponse(string responseSyncResponseRequest, NSMutableArray<NSString> dataListConfig);

        // -(int)genZta:(Blob *)blob ese:(NSString *)ese authorizationData:(NSString *)authorizationData packet:(NSMutableString *)packet;
        [Export("genZta:ese:authorizationData:packet:")]
        int GenZta(Blob blob, string ese, string authorizationData, NSMutableString packet);

        // -(int)generateSignature:(Blob *)iBlob iDataList:(NSMutableArray<NSString *> *)iDataList oSignature:(NSMutableString *)oSignature;
        [Export("generateSignature:iDataList:oSignature:")]
        int GenerateSignature(Blob iBlob, NSMutableArray<NSString> iDataList, NSMutableString oSignature);
    }

    // @interface EmbeddedSdkException : NSException
    [BaseType(typeof(NSException))]
    interface EmbeddedSdkException
    {
        // -(id)initWithType:(int)type code:(int)code message:(NSString *)msg;
        [Export("initWithType:code:message:")]
        NativeHandle Constructor(int type, int code, string msg);

        // -(int)getErrorType;
        [Export("getErrorType")]
        int ErrorType { get; }

        // -(int)getErrorCode;
        [Export("getErrorCode")]
        int ErrorCode { get; }

        // -(NSString *)getErrorMessage;
        [Export("getErrorMessage")]
        string ErrorMessage { get; }
    }
}