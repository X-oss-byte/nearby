// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/errorcode/error_code_enums.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_2ferrorcode_2ferror_5fcode_5fenums_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto_2ferrorcode_2ferror_5fcode_5fenums_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_proto_2ferrorcode_2ferror_5fcode_5fenums_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2ferrorcode_2ferror_5fcode_5fenums_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE
namespace location {
namespace nearby {
namespace errorcode {
namespace proto {

enum ErrorType : int {
  UNKNOWN_TYPE = 0,
  DEVELOPING = 1,
  DEVICE = 2,
  SYSTEM = 3,
  NETWORK = 4,
  OTHERS = 5
};
bool ErrorType_IsValid(int value);
constexpr ErrorType ErrorType_MIN = UNKNOWN_TYPE;
constexpr ErrorType ErrorType_MAX = OTHERS;
constexpr int ErrorType_ARRAYSIZE = ErrorType_MAX + 1;

const std::string& ErrorType_Name(ErrorType value);
template<typename T>
inline const std::string& ErrorType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ErrorType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ErrorType_Name.");
  return ErrorType_Name(static_cast<ErrorType>(enum_t_value));
}
bool ErrorType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ErrorType* value);
enum Event : int {
  UNKNOWN_EVENT = 0,
  START_ADVERTISING = 1,
  STOP_ADVERTISING = 2,
  START_LISTENING_INCOMING_CONNECTION = 3,
  STOP_LISTENING_INCOMING_CONNECTION = 4,
  START_DISCOVERING = 5,
  STOP_DISCOVERING = 6,
  CONNECT = 7,
  DISCONNECT = 8,
  ACCEPT_CONNECTION = 9,
  REJECT_CONNECTION = 10,
  SEND_PAYLOAD = 11,
  CANCEL_PAYLOAD = 12,
  RECEIVE_PAYLOAD = 13
};
bool Event_IsValid(int value);
constexpr Event Event_MIN = UNKNOWN_EVENT;
constexpr Event Event_MAX = RECEIVE_PAYLOAD;
constexpr int Event_ARRAYSIZE = Event_MAX + 1;

const std::string& Event_Name(Event value);
template<typename T>
inline const std::string& Event_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Event>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Event_Name.");
  return Event_Name(static_cast<Event>(enum_t_value));
}
bool Event_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, Event* value);
enum CommonError : int {
  UNKNOWN_ERROR = 0,
  INVALID_PARAMETER = 1,
  MEDIUM_NOT_AVAILABLE = 2,
  UNEXPECTED_MEDIUM_STATE = 3,
  OUT_OF_RESOURCE = 4,
  FLOW_CANCELED = 5,
  UNEXPECTED_CALL = 6
};
bool CommonError_IsValid(int value);
constexpr CommonError CommonError_MIN = UNKNOWN_ERROR;
constexpr CommonError CommonError_MAX = UNEXPECTED_CALL;
constexpr int CommonError_ARRAYSIZE = CommonError_MAX + 1;

const std::string& CommonError_Name(CommonError value);
template<typename T>
inline const std::string& CommonError_Name(T enum_t_value) {
  static_assert(::std::is_same<T, CommonError>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function CommonError_Name.");
  return CommonError_Name(static_cast<CommonError>(enum_t_value));
}
bool CommonError_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, CommonError* value);
enum StartAdvertisingError : int {
  MULTIPLE_FAST_ADVERTISEMENT_NOT_ALLOWED = 31,
  FAST_ADVERTISEMENT_ALREADY_ADVERTISED = 32,
  DUPLICATE_ADVERTISING_REQUESTED = 33,
  START_GATT_SERVER_FAILED = 34,
  BLE_MAX_GATT_ADVERTISEMENT_SLOT_REACHED = 35,
  START_LEGACY_ADVERTISING_FAILED = 36,
  START_EXTENDED_ADVERTISING_FAILED = 38,
  BLUETOOTH_ALREADY_ADVERTISED = 40,
  MODIFY_BLUETOOTH_NAME_FAILED = 41,
  PERSIST_ORIGINAL_BLUETOOTH_NAME_FAILED = 42,
  START_ADVERTISING_FAILED = 43,
  SHOULD_ACCEPT_CONNECTIONS_BEFORE_ADVERTISING_ON_WIFI_LAN = 44,
  ACQUIRE_WIFI_AWARE_SESSION_FAILED = 45,
  UNKNOWN_START_ADVERTISING_ERROR = 46,
  AWARE_UPDATE_PUBLISHING_FAILED = 47
};
bool StartAdvertisingError_IsValid(int value);
constexpr StartAdvertisingError StartAdvertisingError_MIN = MULTIPLE_FAST_ADVERTISEMENT_NOT_ALLOWED;
constexpr StartAdvertisingError StartAdvertisingError_MAX = AWARE_UPDATE_PUBLISHING_FAILED;
constexpr int StartAdvertisingError_ARRAYSIZE = StartAdvertisingError_MAX + 1;

const std::string& StartAdvertisingError_Name(StartAdvertisingError value);
template<typename T>
inline const std::string& StartAdvertisingError_Name(T enum_t_value) {
  static_assert(::std::is_same<T, StartAdvertisingError>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function StartAdvertisingError_Name.");
  return StartAdvertisingError_Name(static_cast<StartAdvertisingError>(enum_t_value));
}
bool StartAdvertisingError_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, StartAdvertisingError* value);
enum StopAdvertisingError : int {
  STOP_ADVERTISING_FAILED = 31,
  RESTORE_BLUETOOTH_NAME_FAILED = 32,
  STOP_LEGACY_ADVERTISING_FAILED = 33,
  STOP_EXTENDED_ADVERTISING_FAILED = 34,
  UNKNOWN_STOP_ADVERTISING_ERROR = 35
};
bool StopAdvertisingError_IsValid(int value);
constexpr StopAdvertisingError StopAdvertisingError_MIN = STOP_ADVERTISING_FAILED;
constexpr StopAdvertisingError StopAdvertisingError_MAX = UNKNOWN_STOP_ADVERTISING_ERROR;
constexpr int StopAdvertisingError_ARRAYSIZE = StopAdvertisingError_MAX + 1;

const std::string& StopAdvertisingError_Name(StopAdvertisingError value);
template<typename T>
inline const std::string& StopAdvertisingError_Name(T enum_t_value) {
  static_assert(::std::is_same<T, StopAdvertisingError>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function StopAdvertisingError_Name.");
  return StopAdvertisingError_Name(static_cast<StopAdvertisingError>(enum_t_value));
}
bool StopAdvertisingError_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, StopAdvertisingError* value);
enum StartDiscoveringError : int {
  DUPLICATE_DISCOVERING_REQUESTED = 31,
  START_LEGACY_DISCOVERING_FAILED = 32,
  START_EXTENDED_DISCOVERING_FAILED = 33,
  START_DISCOVERING_FAILED = 34,
  INVALID_TARGET_INFO = 35,
  FETCH_ADVERTISEMENT_FAILED = 36,
  GATT_FETCH_ADVERTISEMENT_FAILED = 37,
  L2CAP_FETCH_ADVERTISEMENT_FAILED = 38,
  NOT_AVAILABLE_TO_FETCH_ADVERTISEMENT = 39,
  ACQUIRE_WIFI_AWARE_SESSION_FOR_DISCOVERING_FAILED = 40,
  UNKNOWN_START_DISCOVERING_ERROR = 41
};
bool StartDiscoveringError_IsValid(int value);
constexpr StartDiscoveringError StartDiscoveringError_MIN = DUPLICATE_DISCOVERING_REQUESTED;
constexpr StartDiscoveringError StartDiscoveringError_MAX = UNKNOWN_START_DISCOVERING_ERROR;
constexpr int StartDiscoveringError_ARRAYSIZE = StartDiscoveringError_MAX + 1;

const std::string& StartDiscoveringError_Name(StartDiscoveringError value);
template<typename T>
inline const std::string& StartDiscoveringError_Name(T enum_t_value) {
  static_assert(::std::is_same<T, StartDiscoveringError>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function StartDiscoveringError_Name.");
  return StartDiscoveringError_Name(static_cast<StartDiscoveringError>(enum_t_value));
}
bool StartDiscoveringError_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, StartDiscoveringError* value);
enum StopDiscoveringError : int {
  STOP_DISCOVERING_FAILED = 31,
  STOP_LEGACY_DISCOVERING_FAILED = 32,
  STOP_EXTENDED_DISCOVERING_FAILED = 33,
  UNKNOWN_STOP_DISCOVERING_ERROR = 34
};
bool StopDiscoveringError_IsValid(int value);
constexpr StopDiscoveringError StopDiscoveringError_MIN = STOP_DISCOVERING_FAILED;
constexpr StopDiscoveringError StopDiscoveringError_MAX = UNKNOWN_STOP_DISCOVERING_ERROR;
constexpr int StopDiscoveringError_ARRAYSIZE = StopDiscoveringError_MAX + 1;

const std::string& StopDiscoveringError_Name(StopDiscoveringError value);
template<typename T>
inline const std::string& StopDiscoveringError_Name(T enum_t_value) {
  static_assert(::std::is_same<T, StopDiscoveringError>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function StopDiscoveringError_Name.");
  return StopDiscoveringError_Name(static_cast<StopDiscoveringError>(enum_t_value));
}
bool StopDiscoveringError_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, StopDiscoveringError* value);
enum StartListeningIncomingConnectionError : int {
  DUPLICATE_ACCEPTING_CONNECTION_REQUESTED = 31,
  OPEN_GATT_SERVER_FAILED = 32,
  ACCEPT_GATT_CONNECTION_FAILED = 33,
  ACCEPT_L2CAP_CONNECTION_FAILED = 34,
  CREATE_GATT_SERVER_SOCKET_NOT_READY = 35,
  ACCEPT_CONNECTION_FAILED = 36,
  CREATE_SERVER_SOCKET_FAILED = 37,
  UNKNOWN_START_LISTENING_INCOMING_CONNECTION_ERROR = 38,
  ACCEPT_SEND_AWARE_L2_MESSAGE_FAILED = 39,
  ACCEPT_RECEIVE_AWARE_L2_MESSAGE_FAILED = 40
};
bool StartListeningIncomingConnectionError_IsValid(int value);
constexpr StartListeningIncomingConnectionError StartListeningIncomingConnectionError_MIN = DUPLICATE_ACCEPTING_CONNECTION_REQUESTED;
constexpr StartListeningIncomingConnectionError StartListeningIncomingConnectionError_MAX = ACCEPT_RECEIVE_AWARE_L2_MESSAGE_FAILED;
constexpr int StartListeningIncomingConnectionError_ARRAYSIZE = StartListeningIncomingConnectionError_MAX + 1;

const std::string& StartListeningIncomingConnectionError_Name(StartListeningIncomingConnectionError value);
template<typename T>
inline const std::string& StartListeningIncomingConnectionError_Name(T enum_t_value) {
  static_assert(::std::is_same<T, StartListeningIncomingConnectionError>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function StartListeningIncomingConnectionError_Name.");
  return StartListeningIncomingConnectionError_Name(static_cast<StartListeningIncomingConnectionError>(enum_t_value));
}
bool StartListeningIncomingConnectionError_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, StartListeningIncomingConnectionError* value);
enum StopListeningIncomingConnectionError : int {
  STOP_ACCEPTING_CONNECTION_FAILED = 31,
  UNKNOWN_STOP_LISTENING_INCOMING_CONNECTION_ERROR = 32
};
bool StopListeningIncomingConnectionError_IsValid(int value);
constexpr StopListeningIncomingConnectionError StopListeningIncomingConnectionError_MIN = STOP_ACCEPTING_CONNECTION_FAILED;
constexpr StopListeningIncomingConnectionError StopListeningIncomingConnectionError_MAX = UNKNOWN_STOP_LISTENING_INCOMING_CONNECTION_ERROR;
constexpr int StopListeningIncomingConnectionError_ARRAYSIZE = StopListeningIncomingConnectionError_MAX + 1;

const std::string& StopListeningIncomingConnectionError_Name(StopListeningIncomingConnectionError value);
template<typename T>
inline const std::string& StopListeningIncomingConnectionError_Name(T enum_t_value) {
  static_assert(::std::is_same<T, StopListeningIncomingConnectionError>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function StopListeningIncomingConnectionError_Name.");
  return StopListeningIncomingConnectionError_Name(static_cast<StopListeningIncomingConnectionError>(enum_t_value));
}
bool StopListeningIncomingConnectionError_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, StopListeningIncomingConnectionError* value);
enum ConnectError : int {
  UNEXPECT_TARGET_LOST = 31,
  ESTABLISH_GATT_CONNECTION_FAILED = 32,
  ESTABLISH_L2CAP_CONNECTION_FAILED = 33,
  INVALID_MAC_ADDRESS = 34,
  SLEEP_BEFORE_CONNECT_GATT_INTERRUPTED = 35,
  SLEEP_AFTER_GATT_CONNECTED_INTERRUPTED = 36,
  REQUEST_GATT_CONNECTION_PRIORITY_FAILED = 37,
  L2CAP_SWITCH_TO_DATA_TRANSFERRING_FAILED = 38,
  GATT_SWITCH_TO_DATA_TRANSFERRING_FAILED = 39,
  ESTABLISH_CONNECTION_FAILED = 40,
  DUPLICATE_CONNECTION_REQUESTED = 41,
  CONNECTION_LOST = 42,
  CONNECT_TO_NETWORK_FAILED = 43,
  UNKNOWN_CONNECT_ERROR = 44,
  CONNECT_SEND_AWARE_L2_MESSAGE_FAILED = 45,
  CONNECT_READ_AWARE_L2_MESSAGE_FAILED = 46
};
bool ConnectError_IsValid(int value);
constexpr ConnectError ConnectError_MIN = UNEXPECT_TARGET_LOST;
constexpr ConnectError ConnectError_MAX = CONNECT_READ_AWARE_L2_MESSAGE_FAILED;
constexpr int ConnectError_ARRAYSIZE = ConnectError_MAX + 1;

const std::string& ConnectError_Name(ConnectError value);
template<typename T>
inline const std::string& ConnectError_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ConnectError>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ConnectError_Name.");
  return ConnectError_Name(static_cast<ConnectError>(enum_t_value));
}
bool ConnectError_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ConnectError* value);
enum DisconnectError : int {
  DISCONNECT_NETWORK_FAILED = 31,
  UNKNOWN_DISCONNECT_ERROR = 32
};
bool DisconnectError_IsValid(int value);
constexpr DisconnectError DisconnectError_MIN = DISCONNECT_NETWORK_FAILED;
constexpr DisconnectError DisconnectError_MAX = UNKNOWN_DISCONNECT_ERROR;
constexpr int DisconnectError_ARRAYSIZE = DisconnectError_MAX + 1;

const std::string& DisconnectError_Name(DisconnectError value);
template<typename T>
inline const std::string& DisconnectError_Name(T enum_t_value) {
  static_assert(::std::is_same<T, DisconnectError>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function DisconnectError_Name.");
  return DisconnectError_Name(static_cast<DisconnectError>(enum_t_value));
}
bool DisconnectError_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, DisconnectError* value);
enum Description : int {
  UNKNOWN = 0,
  NULL_SERVICE_ID = 1,
  NULL_ADVERTISEMENT_BYTES = 2,
  CONNECTIONS_FEATURE_DISABLED = 3,
  STALE_SDK_VERSION = 4,
  FEATURE_BLUETOOTH_NOT_SUPPORTED = 5,
  FEATURE_BLUETOOTH_LE_NOT_SUPPORTED = 6,
  NULL_BLUETOOTH_MANAGER = 7,
  NULL_BLUETOOTH_ADAPTER = 8,
  INVALID_FAST_PAIR_MODEL_ID = 9,
  INVALID_FAST_ADVERTISEMENT_DATA = 10,
  INVALID_ADVERTISEMENT_HEADER_DATA = 11,
  INVALID_REGULAR_ADVERTISEMENT_DATA = 12,
  NULL_BLUETOOTH_LE_ADVERTISER_COMPAT = 13,
  ADVERTISE_FAILED_ALREADY_STARTED = 14,
  ADVERTISE_FAILED_DATA_TOO_LARGE = 15,
  ADVERTISE_FAILED_FEATURE_UNSUPPORTED = 16,
  ADVERTISE_FAILED_INTERNAL_ERROR = 17,
  ADVERTISE_FAILED_TOO_MANY_ADVERTISERS = 18,
  INTERRUPTED_EXCEPTION = 19,
  EXECUTION_EXCEPTION = 20,
  NULL_BLUETOOTH_DEVICE_NAME = 21,
  SET_SCAN_MODE_FAILED = 22,
  INVOKE_API_FAILED = 23,
  TIMEOUT = 24,
  NULL_NFC_TAG = 25,
  FEATURE_NFC_NOT_SUPPORTED = 26,
  FEATURE_NFC_HOST_CARD_EMULATION_NOT_SUPPORTED = 27,
  MULTICAST_NOT_SUPPORTED = 30,
  NSD_NOT_ENABLED = 31,
  INVALID_PORT_NUMBER = 32,
  NULL_SERVICE_NAME = 33,
  NULL_SERVICE_TYPE = 34,
  WITHOUT_CONNECTED_WIFI_NETWORK = 35,
  FEATURE_WIFI_AWARE_NOT_SUPPORTED = 36,
  NULL_CONNECTIVITY_MANAGER = 37,
  NULL_WIFI_AWARE_MANAGER = 38,
  STALE_ANDROID_VERSION = 39,
  NULL_SERVICE_INFO = 40,
  NULL_WORK_SOURCE = 41,
  NULL_CALLBACK = 42,
  NULL_BLUETOOTH_LE_SCANNER_COMPAT = 43,
  EMPTY_WORK_SOURCE_CACHE = 44,
  SCAN_FAILED_ALREADY_STARTED = 45,
  SCAN_FAILED_APPLICATION_REGISTRATION_FAILED = 46,
  SCAN_FAILED_INTERNAL_ERROR = 47,
  SCAN_FAILED_FEATURE_UNSUPPORTED = 48,
  SCAN_FAILED_BLUETOOTH_DISABLED = 49,
  SCAN_FILTERS_NOT_ALLOWED_FOR_LOCATION = 50,
  BLUETOOTH_SCAN_REJUVENATE_FAILED = 51,
  NULL_BLE_PERIPHERAL = 52,
  NULL_BLUETOOTH_GATT = 53,
  UNEXPECTED_BLUETOOTH_STATE = 54,
  REMOTE_EXCEPTION = 55,
  INVALID_BLUETOOTH_SOCKET_STATE_BEFORE_CONNECT = 56,
  BLUETOOTH_SOCKET_CLOSED_AFTER_CONNECTED = 57,
  INVALID_BLUETOOTH_CHANNEL = 58,
  NULL_BLUETOOTH_DEVICE = 59,
  NULL_BLUETOOTH_PROXY = 60,
  INVALID_PACKET_LENGTH = 61,
  INVALID_PACKET_BYTES = 62,
  UNEXPECTED_EOF_EXCEPTION = 63,
  SOCKET_CLOSED_OR_TIMEOUT = 64,
  INVALID_IPV4_ADDRESS = 65,
  INVALID_IPV6_ADDRESS = 66,
  NULL_ADDRESS = 67,
  INVALID_VERSION = 68,
  SET_CONNECTION_PRIORITY_FAILED = 69,
  SET_CONNECTION_PRIORITY_INTERRUPTED = 70,
  UNKNOWN_IO_EXCEPTION = 71,
  READ_CHARACTERISTIC_FAILED = 72,
  WIFI_HOTSPOT_ENABLED = 73,
  AWARE_UNAVAILABLE = 74,
  IN_BLACK_LIST = 75,
  FEATURE_WIFI_NOT_SUPPORTED = 76,
  NULL_WIFI_MANAGER = 77,
  SOCKET_CLOSED = 78,
  SOCKET_ALREADY_CONNECTED = 79,
  NFC_TECH_NOT_SUPPORTED = 80,
  NFC_SERVICE_DIED = 81,
  BIND_NFC_SERVICE_FAILED = 82,
  NFC_CREATE_SOCKET_FAILED = 83,
  NULL_WIFI_AWARE_PEER = 84,
  NETWORK_ALREADY_JOINED = 85,
  JOIN_AWARE_NETWORK_CANCELLED = 86,
  NETWORK_UNAVAILABLE = 87,
  WITHOUT_ACTIVE_AWARE_NETWORK = 88,
  WITHOUT_JOINED_AWARE_NETWORK = 89,
  CONNET_TO_SOCKET_CANCELLED = 90,
  NULL_SSID = 91,
  NULL_PASSWORD = 92,
  FEATURE_WIFI_DIRECT_NOT_SUPPORTED = 93,
  NULL_WIFI_P2P_MANAGER = 94,
  P2P_GROUP_FORMED = 95,
  ACQUIRE_P2P_CHANNEL_FAILED = 96,
  P2P_UNSUPPORTED = 97,
  INTERNAL_ERROR = 98,
  BUSY = 99,
  REFLECTION_ERROR = 100,
  NETWORK_ERROR_EHOSTUNREACH = 101,
  NETWORK_ERROR_ENETUNREACH = 102,
  ADD_NETWORK_FAILED = 103,
  UPDATE_NETWORK_FAILED = 104,
  ALREADY_IN_PROGRESS = 105,
  INVALID_ARGS = 106,
  NOT_AUTHORIZED = 107,
  INVALID_NETWORK_ID = 108,
  WIFI_MANAGER_ENABLE_NETWORK_FAILED = 109,
  WIFI_MANAGER_RECONNECT_FAILED = 110,
  WITHOUT_ACTIVE_NETWORK = 111,
  WEBRTC_CONNECTION_FLOW_EXIST = 112,
  NULL_DROID_GUARD_RESULT = 113,
  TACHYON_SIGNALING_MESSENGER_EXIST = 114,
  TACHYON_ALREADY_START_RECEIVE_MESSAGE = 115,
  TACHYON_RECEIVE_MESSAGE_FAILED = 116,
  TACHYON_RECEIVE_MESSAGE_INTERRUPTED = 117,
  TACHYON_RECEIVE_MESSAGE_EXECUTION_EXCEPTION = 118,
  TACHYON_RECEIVE_MESSAGE_TIMEOUT = 119,
  TACHYON_RECEIVE_MESSAGE_AUTH_EXCEPTION = 120,
  TACHYON_RECEIVE_MESSAGE_STATUS_EXCEPTION = 121,
  TACHYON_SEND_MESSAGE_AUTH_EXCEPTION = 122,
  TACHYON_SEND_MESSAGE_STATUS_EXCEPTION = 123,
  TACHYON_GET_ICE_SERVER_AUTH_EXCEPTION = 124,
  TACHYON_GET_ICE_SERVER_STATUS_EXCEPTION = 125,
  EMPTY_TACHYON_ICE_SERVER = 126,
  POTENTIAL_WEBRTC_LIB_LOADING_FAILURE = 127,
  UNEXPECTED_GATT_DESCRIPTOR = 128,
  FAIL_TO_RECEIVE_L2CAP_PACKET = 129,
  WITHOUT_PSM_VALUE = 130,
  SOCKET_BIND_LISTEN_FAILED = 131,
  UNEXPECTED_PACKET_CONTENT = 132,
  UNREGISTER_NSD_MANAGER_FAILED = 133,
  PUBLISH_EMPTY_ADVERTISEMENT_FAILED = 134,
  BLUETOOTH_SOCKET_NOT_IN_LISTENING_STATE = 135,
  INVALID_BLUETOOTH_SOCKET_SIGNAL_SIZE = 136,
  INVALID_BLUETOOTH_SOCKET_SIGNAL_STATUS = 137,
  GET_ADDRESS_FAILED = 138,
  NULL_LOCAL_ADDRESS = 139,
  IS_LOOPBACK_ADDRESS = 140,
  SOCKET_NOT_BOUND = 141,
  INVALID_REMOTE_ADDRESS = 142,
  SOCKET_ALREADY_BOUND = 143,
  HOTSPOT_NOT_STARTED = 144,
  WEBRTC_ALREADY_INITIALIZED = 145,
  INVALID_WEBRTC_STATE = 146,
  NULL_DATA_CHANNEL = 147,
  CREATE_OFFER_FAILED = 148,
  CLOSE_SERVER_SOCKET_FAILED = 149,
  WIFI_AWARE_STARTED = 150,
  AWARE_PUBLISH_SESSION_RAN_OUT = 151,
  AWARE_SUBSCRIBE_SESSION_RAN_OUT = 152,
  AWARE_DATA_PATH_RAN_OUT = 153,
  WIFI_SIGNAL_STRENGTH_POOR = 154,
  POTENTIAL_SRD_ISSUE = 155,
  AWARE_L2_MESSAGE_HOST_NETWORK_ERROR = 156,
  AWARE_L2_MESSAGE_NETWORK_AVAILABLE_ERROR = 157,
  AWARE_L2_MESSAGE_IP_AVAILABLE_ERROR = 158,
  AWARE_L2_MESSAGE_CANCELLATION_RECEIVED = 159,
  TIE_BREAK_LOSER = 160,
  SERVER_SOCKET_UNAVAILABLE = 161,
  HOSTED_NETWORK_UNAVAILABLE = 162,
  AWARE_UPDATE_PUBLISHING_CONFIG_FAILED = 163,
  L2CAP_UNAVAILABLE = 164,
  ALREADY_HAS_GATT_CONNECTION = 165,
  UNSUPPORTED_DEVICE_TYPE = 166,
  UNSUPPORTED_DEVICE_TYPE_CHROME_OS = 167,
  UNSUPPORTED_DEVICE_TYPE_AUTO = 168,
  UNSUPPORTED_DEVICE_TYPE_TV = 169,
  UNSUPPORTED_DEVICE_TYPE_WEAR = 170,
  NULL_MESSAGE = 171
};
bool Description_IsValid(int value);
constexpr Description Description_MIN = UNKNOWN;
constexpr Description Description_MAX = NULL_MESSAGE;
constexpr int Description_ARRAYSIZE = Description_MAX + 1;

const std::string& Description_Name(Description value);
template<typename T>
inline const std::string& Description_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Description>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Description_Name.");
  return Description_Name(static_cast<Description>(enum_t_value));
}
bool Description_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, Description* value);
// ===================================================================


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace errorcode
}  // namespace nearby
}  // namespace location

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::location::nearby::errorcode::proto::ErrorType> : ::std::true_type {};
template <> struct is_proto_enum< ::location::nearby::errorcode::proto::Event> : ::std::true_type {};
template <> struct is_proto_enum< ::location::nearby::errorcode::proto::CommonError> : ::std::true_type {};
template <> struct is_proto_enum< ::location::nearby::errorcode::proto::StartAdvertisingError> : ::std::true_type {};
template <> struct is_proto_enum< ::location::nearby::errorcode::proto::StopAdvertisingError> : ::std::true_type {};
template <> struct is_proto_enum< ::location::nearby::errorcode::proto::StartDiscoveringError> : ::std::true_type {};
template <> struct is_proto_enum< ::location::nearby::errorcode::proto::StopDiscoveringError> : ::std::true_type {};
template <> struct is_proto_enum< ::location::nearby::errorcode::proto::StartListeningIncomingConnectionError> : ::std::true_type {};
template <> struct is_proto_enum< ::location::nearby::errorcode::proto::StopListeningIncomingConnectionError> : ::std::true_type {};
template <> struct is_proto_enum< ::location::nearby::errorcode::proto::ConnectError> : ::std::true_type {};
template <> struct is_proto_enum< ::location::nearby::errorcode::proto::DisconnectError> : ::std::true_type {};
template <> struct is_proto_enum< ::location::nearby::errorcode::proto::Description> : ::std::true_type {};

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto_2ferrorcode_2ferror_5fcode_5fenums_2eproto
