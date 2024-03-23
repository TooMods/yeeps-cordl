#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TrafficStatsGameLevel)
namespace System::Diagnostics {
class Stopwatch;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class TrafficStatsGameLevel;
}
// Write type traits
MARK_REF_PTR_T(::ExitGames::Client::Photon::TrafficStatsGameLevel);
// Type: ExitGames.Client.Photon::TrafficStatsGameLevel
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ::ExitGames.Client.Photon::TrafficStatsGameLevel*
class CORDL_TYPE TrafficStatsGameLevel : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_DispatchCalls)) int32_t DispatchCalls;

  __declspec(property(get = get_DispatchIncomingCommandsCalls, put = set_DispatchIncomingCommandsCalls)) int32_t DispatchIncomingCommandsCalls;

  __declspec(property(get = get_EventByteCount, put = set_EventByteCount)) int32_t EventByteCount;

  __declspec(property(get = get_EventCount, put = set_EventCount)) int32_t EventCount;

  __declspec(property(get = get_LongestDeltaBetweenDispatching, put = set_LongestDeltaBetweenDispatching)) int32_t LongestDeltaBetweenDispatching;

  __declspec(property(get = get_LongestDeltaBetweenSending, put = set_LongestDeltaBetweenSending)) int32_t LongestDeltaBetweenSending;

  __declspec(property(get = get_LongestEventCallback, put = set_LongestEventCallback)) int32_t LongestEventCallback;

  __declspec(property(get = get_LongestEventCallbackCode, put = set_LongestEventCallbackCode)) uint8_t LongestEventCallbackCode;

  __declspec(property(get = get_LongestMessageCallback, put = set_LongestMessageCallback)) int32_t LongestMessageCallback;

  __declspec(property(get = get_LongestOpResponseCallback, put = set_LongestOpResponseCallback)) int32_t LongestOpResponseCallback;

  __declspec(property(get = get_LongestOpResponseCallbackOpCode, put = set_LongestOpResponseCallbackOpCode)) uint8_t LongestOpResponseCallbackOpCode;

  __declspec(property(get = get_LongestRawMessageCallback, put = set_LongestRawMessageCallback)) int32_t LongestRawMessageCallback;

  __declspec(property(get = get_OperationByteCount, put = set_OperationByteCount)) int32_t OperationByteCount;

  __declspec(property(get = get_OperationCount, put = set_OperationCount)) int32_t OperationCount;

  __declspec(property(get = get_ResultByteCount, put = set_ResultByteCount)) int32_t ResultByteCount;

  __declspec(property(get = get_ResultCount, put = set_ResultCount)) int32_t ResultCount;

  __declspec(property(get = get_SendOutgoingCommandsCalls, put = set_SendOutgoingCommandsCalls)) int32_t SendOutgoingCommandsCalls;

  __declspec(property(get = get_TotalByteCount)) int32_t TotalByteCount;

  __declspec(property(get = get_TotalIncomingByteCount)) int32_t TotalIncomingByteCount;

  __declspec(property(get = get_TotalIncomingMessageCount)) int32_t TotalIncomingMessageCount;

  __declspec(property(get = get_TotalMessageCount)) int32_t TotalMessageCount;

  __declspec(property(get = get_TotalOutgoingByteCount)) int32_t TotalOutgoingByteCount;

  __declspec(property(get = get_TotalOutgoingMessageCount)) int32_t TotalOutgoingMessageCount;

  /// @brief Field <DispatchIncomingCommandsCalls>k__BackingField, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__DispatchIncomingCommandsCalls_k__BackingField,
                      put = __cordl_internal_set__DispatchIncomingCommandsCalls_k__BackingField)) int32_t _DispatchIncomingCommandsCalls_k__BackingField;

  /// @brief Field <EventByteCount>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__EventByteCount_k__BackingField, put = __cordl_internal_set__EventByteCount_k__BackingField)) int32_t _EventByteCount_k__BackingField;

  /// @brief Field <EventCount>k__BackingField, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__EventCount_k__BackingField, put = __cordl_internal_set__EventCount_k__BackingField)) int32_t _EventCount_k__BackingField;

  /// @brief Field <LongestDeltaBetweenDispatching>k__BackingField, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__LongestDeltaBetweenDispatching_k__BackingField,
                      put = __cordl_internal_set__LongestDeltaBetweenDispatching_k__BackingField)) int32_t _LongestDeltaBetweenDispatching_k__BackingField;

  /// @brief Field <LongestDeltaBetweenSending>k__BackingField, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__LongestDeltaBetweenSending_k__BackingField,
                      put = __cordl_internal_set__LongestDeltaBetweenSending_k__BackingField)) int32_t _LongestDeltaBetweenSending_k__BackingField;

  /// @brief Field <LongestEventCallbackCode>k__BackingField, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get__LongestEventCallbackCode_k__BackingField,
                      put = __cordl_internal_set__LongestEventCallbackCode_k__BackingField)) uint8_t _LongestEventCallbackCode_k__BackingField;

  /// @brief Field <LongestEventCallback>k__BackingField, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__LongestEventCallback_k__BackingField,
                      put = __cordl_internal_set__LongestEventCallback_k__BackingField)) int32_t _LongestEventCallback_k__BackingField;

  /// @brief Field <LongestMessageCallback>k__BackingField, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__LongestMessageCallback_k__BackingField,
                      put = __cordl_internal_set__LongestMessageCallback_k__BackingField)) int32_t _LongestMessageCallback_k__BackingField;

  /// @brief Field <LongestOpResponseCallbackOpCode>k__BackingField, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get__LongestOpResponseCallbackOpCode_k__BackingField,
                      put = __cordl_internal_set__LongestOpResponseCallbackOpCode_k__BackingField)) uint8_t _LongestOpResponseCallbackOpCode_k__BackingField;

  /// @brief Field <LongestOpResponseCallback>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__LongestOpResponseCallback_k__BackingField,
                      put = __cordl_internal_set__LongestOpResponseCallback_k__BackingField)) int32_t _LongestOpResponseCallback_k__BackingField;

  /// @brief Field <LongestRawMessageCallback>k__BackingField, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__LongestRawMessageCallback_k__BackingField,
                      put = __cordl_internal_set__LongestRawMessageCallback_k__BackingField)) int32_t _LongestRawMessageCallback_k__BackingField;

  /// @brief Field <OperationByteCount>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__OperationByteCount_k__BackingField, put = __cordl_internal_set__OperationByteCount_k__BackingField)) int32_t _OperationByteCount_k__BackingField;

  /// @brief Field <OperationCount>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__OperationCount_k__BackingField, put = __cordl_internal_set__OperationCount_k__BackingField)) int32_t _OperationCount_k__BackingField;

  /// @brief Field <ResultByteCount>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__ResultByteCount_k__BackingField, put = __cordl_internal_set__ResultByteCount_k__BackingField)) int32_t _ResultByteCount_k__BackingField;

  /// @brief Field <ResultCount>k__BackingField, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__ResultCount_k__BackingField, put = __cordl_internal_set__ResultCount_k__BackingField)) int32_t _ResultCount_k__BackingField;

  /// @brief Field <SendOutgoingCommandsCalls>k__BackingField, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__SendOutgoingCommandsCalls_k__BackingField,
                      put = __cordl_internal_set__SendOutgoingCommandsCalls_k__BackingField)) int32_t _SendOutgoingCommandsCalls_k__BackingField;

  /// @brief Field timeOfLastDispatchCall, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_timeOfLastDispatchCall, put = __cordl_internal_set_timeOfLastDispatchCall)) int32_t timeOfLastDispatchCall;

  /// @brief Field timeOfLastSendCall, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_timeOfLastSendCall, put = __cordl_internal_set_timeOfLastSendCall)) int32_t timeOfLastSendCall;

  /// @brief Field watch, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_watch, put = __cordl_internal_set_watch))::System::Diagnostics::Stopwatch* watch;

  /// @brief Method CountEvent, addr 0x2ac306c, size 0x14, virtual false, abstract: false, final false
  inline void CountEvent(int32_t eventBytes);

  /// @brief Method CountOperation, addr 0x2ac2824, size 0x14, virtual false, abstract: false, final false
  inline void CountOperation(int32_t operationBytes);

  /// @brief Method CountResult, addr 0x2ac3058, size 0x14, virtual false, abstract: false, final false
  inline void CountResult(int32_t resultBytes);

  /// @brief Method DispatchIncomingCommandsCalled, addr 0x2ac30d8, size 0x64, virtual false, abstract: false, final false
  inline void DispatchIncomingCommandsCalled();

  static inline ::ExitGames::Client::Photon::TrafficStatsGameLevel* New_ctor(::System::Diagnostics::Stopwatch* sw);

  /// @brief Method ResetMaximumCounters, addr 0x2ac31a0, size 0x20, virtual false, abstract: false, final false
  inline void ResetMaximumCounters();

  /// @brief Method SendOutgoingCommandsCalled, addr 0x2ac313c, size 0x64, virtual false, abstract: false, final false
  inline void SendOutgoingCommandsCalled();

  /// @brief Method TimeForEventCallback, addr 0x2ac3098, size 0x18, virtual false, abstract: false, final false
  inline void TimeForEventCallback(uint8_t code, int32_t time);

  /// @brief Method TimeForMessageCallback, addr 0x2ac30b0, size 0x14, virtual false, abstract: false, final false
  inline void TimeForMessageCallback(int32_t time);

  /// @brief Method TimeForRawMessageCallback, addr 0x2ac30c4, size 0x14, virtual false, abstract: false, final false
  inline void TimeForRawMessageCallback(int32_t time);

  /// @brief Method TimeForResponseCallback, addr 0x2ac3080, size 0x18, virtual false, abstract: false, final false
  inline void TimeForResponseCallback(uint8_t code, int32_t time);

  /// @brief Method ToString, addr 0x2ac31c0, size 0xc4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToStringVitalStats, addr 0x2ac3284, size 0x2c0, virtual false, abstract: false, final false
  inline ::StringW ToStringVitalStats();

  constexpr int32_t const& __cordl_internal_get__DispatchIncomingCommandsCalls_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__DispatchIncomingCommandsCalls_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__EventByteCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__EventByteCount_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__EventCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__EventCount_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__LongestDeltaBetweenDispatching_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__LongestDeltaBetweenDispatching_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__LongestDeltaBetweenSending_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__LongestDeltaBetweenSending_k__BackingField();

  constexpr uint8_t const& __cordl_internal_get__LongestEventCallbackCode_k__BackingField() const;

  constexpr uint8_t& __cordl_internal_get__LongestEventCallbackCode_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__LongestEventCallback_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__LongestEventCallback_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__LongestMessageCallback_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__LongestMessageCallback_k__BackingField();

  constexpr uint8_t const& __cordl_internal_get__LongestOpResponseCallbackOpCode_k__BackingField() const;

  constexpr uint8_t& __cordl_internal_get__LongestOpResponseCallbackOpCode_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__LongestOpResponseCallback_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__LongestOpResponseCallback_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__LongestRawMessageCallback_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__LongestRawMessageCallback_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__OperationByteCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__OperationByteCount_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__OperationCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__OperationCount_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__ResultByteCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__ResultByteCount_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__ResultCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__ResultCount_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__SendOutgoingCommandsCalls_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__SendOutgoingCommandsCalls_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_timeOfLastDispatchCall() const;

  constexpr int32_t& __cordl_internal_get_timeOfLastDispatchCall();

  constexpr int32_t const& __cordl_internal_get_timeOfLastSendCall() const;

  constexpr int32_t& __cordl_internal_get_timeOfLastSendCall();

  constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get_watch();

  constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::Stopwatch*> const& __cordl_internal_get_watch() const;

  constexpr void __cordl_internal_set__DispatchIncomingCommandsCalls_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__EventByteCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__EventCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__LongestDeltaBetweenDispatching_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__LongestDeltaBetweenSending_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__LongestEventCallbackCode_k__BackingField(uint8_t value);

  constexpr void __cordl_internal_set__LongestEventCallback_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__LongestMessageCallback_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__LongestOpResponseCallbackOpCode_k__BackingField(uint8_t value);

  constexpr void __cordl_internal_set__LongestOpResponseCallback_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__LongestRawMessageCallback_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__OperationByteCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__OperationCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__ResultByteCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__ResultCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__SendOutgoingCommandsCalls_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_timeOfLastDispatchCall(int32_t value);

  constexpr void __cordl_internal_set_timeOfLastSendCall(int32_t value);

  constexpr void __cordl_internal_set_watch(::System::Diagnostics::Stopwatch* value);

  /// @brief Method .ctor, addr 0x2ac3030, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Diagnostics::Stopwatch* sw);

  /// @brief Method get_DispatchCalls, addr 0x2ac2fa8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_DispatchCalls();

  /// @brief Method get_DispatchIncomingCommandsCalls, addr 0x2ac2fb0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_DispatchIncomingCommandsCalls();

  /// @brief Method get_EventByteCount, addr 0x2ac2f08, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_EventByteCount();

  /// @brief Method get_EventCount, addr 0x2ac2f18, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_EventCount();

  /// @brief Method get_LongestDeltaBetweenDispatching, addr 0x2ac2f88, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_LongestDeltaBetweenDispatching();

  /// @brief Method get_LongestDeltaBetweenSending, addr 0x2ac2f98, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_LongestDeltaBetweenSending();

  /// @brief Method get_LongestEventCallback, addr 0x2ac2f48, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_LongestEventCallback();

  /// @brief Method get_LongestEventCallbackCode, addr 0x2ac2f78, size 0x8, virtual false, abstract: false, final false
  inline uint8_t get_LongestEventCallbackCode();

  /// @brief Method get_LongestMessageCallback, addr 0x2ac2f58, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_LongestMessageCallback();

  /// @brief Method get_LongestOpResponseCallback, addr 0x2ac2f28, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_LongestOpResponseCallback();

  /// @brief Method get_LongestOpResponseCallbackOpCode, addr 0x2ac2f38, size 0x8, virtual false, abstract: false, final false
  inline uint8_t get_LongestOpResponseCallbackOpCode();

  /// @brief Method get_LongestRawMessageCallback, addr 0x2ac2f68, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_LongestRawMessageCallback();

  /// @brief Method get_OperationByteCount, addr 0x2ac2ec8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_OperationByteCount();

  /// @brief Method get_OperationCount, addr 0x2ac2ed8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_OperationCount();

  /// @brief Method get_ResultByteCount, addr 0x2ac2ee8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ResultByteCount();

  /// @brief Method get_ResultCount, addr 0x2ac2ef8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ResultCount();

  /// @brief Method get_SendOutgoingCommandsCalls, addr 0x2ac2fc0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_SendOutgoingCommandsCalls();

  /// @brief Method get_TotalByteCount, addr 0x2ac2fd0, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_TotalByteCount();

  /// @brief Method get_TotalIncomingByteCount, addr 0x2ac3000, size 0x10, virtual false, abstract: false, final false
  inline int32_t get_TotalIncomingByteCount();

  /// @brief Method get_TotalIncomingMessageCount, addr 0x2ac3010, size 0x10, virtual false, abstract: false, final false
  inline int32_t get_TotalIncomingMessageCount();

  /// @brief Method get_TotalMessageCount, addr 0x2ac2fe8, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_TotalMessageCount();

  /// @brief Method get_TotalOutgoingByteCount, addr 0x2ac3020, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_TotalOutgoingByteCount();

  /// @brief Method get_TotalOutgoingMessageCount, addr 0x2ac3028, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_TotalOutgoingMessageCount();

  /// @brief Method set_DispatchIncomingCommandsCalls, addr 0x2ac2fb8, size 0x8, virtual false, abstract: false, final false
  inline void set_DispatchIncomingCommandsCalls(int32_t value);

  /// @brief Method set_EventByteCount, addr 0x2ac2f10, size 0x8, virtual false, abstract: false, final false
  inline void set_EventByteCount(int32_t value);

  /// @brief Method set_EventCount, addr 0x2ac2f20, size 0x8, virtual false, abstract: false, final false
  inline void set_EventCount(int32_t value);

  /// @brief Method set_LongestDeltaBetweenDispatching, addr 0x2ac2f90, size 0x8, virtual false, abstract: false, final false
  inline void set_LongestDeltaBetweenDispatching(int32_t value);

  /// @brief Method set_LongestDeltaBetweenSending, addr 0x2ac2fa0, size 0x8, virtual false, abstract: false, final false
  inline void set_LongestDeltaBetweenSending(int32_t value);

  /// @brief Method set_LongestEventCallback, addr 0x2ac2f50, size 0x8, virtual false, abstract: false, final false
  inline void set_LongestEventCallback(int32_t value);

  /// @brief Method set_LongestEventCallbackCode, addr 0x2ac2f80, size 0x8, virtual false, abstract: false, final false
  inline void set_LongestEventCallbackCode(uint8_t value);

  /// @brief Method set_LongestMessageCallback, addr 0x2ac2f60, size 0x8, virtual false, abstract: false, final false
  inline void set_LongestMessageCallback(int32_t value);

  /// @brief Method set_LongestOpResponseCallback, addr 0x2ac2f30, size 0x8, virtual false, abstract: false, final false
  inline void set_LongestOpResponseCallback(int32_t value);

  /// @brief Method set_LongestOpResponseCallbackOpCode, addr 0x2ac2f40, size 0x8, virtual false, abstract: false, final false
  inline void set_LongestOpResponseCallbackOpCode(uint8_t value);

  /// @brief Method set_LongestRawMessageCallback, addr 0x2ac2f70, size 0x8, virtual false, abstract: false, final false
  inline void set_LongestRawMessageCallback(int32_t value);

  /// @brief Method set_OperationByteCount, addr 0x2ac2ed0, size 0x8, virtual false, abstract: false, final false
  inline void set_OperationByteCount(int32_t value);

  /// @brief Method set_OperationCount, addr 0x2ac2ee0, size 0x8, virtual false, abstract: false, final false
  inline void set_OperationCount(int32_t value);

  /// @brief Method set_ResultByteCount, addr 0x2ac2ef0, size 0x8, virtual false, abstract: false, final false
  inline void set_ResultByteCount(int32_t value);

  /// @brief Method set_ResultCount, addr 0x2ac2f00, size 0x8, virtual false, abstract: false, final false
  inline void set_ResultCount(int32_t value);

  /// @brief Method set_SendOutgoingCommandsCalls, addr 0x2ac2fc8, size 0x8, virtual false, abstract: false, final false
  inline void set_SendOutgoingCommandsCalls(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrafficStatsGameLevel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TrafficStatsGameLevel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrafficStatsGameLevel(TrafficStatsGameLevel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrafficStatsGameLevel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrafficStatsGameLevel(TrafficStatsGameLevel const&) = delete;

  /// @brief Field watch, offset: 0x10, size: 0x8, def value: None
  ::System::Diagnostics::Stopwatch* ___watch;

  /// @brief Field timeOfLastDispatchCall, offset: 0x18, size: 0x4, def value: None
  int32_t ___timeOfLastDispatchCall;

  /// @brief Field timeOfLastSendCall, offset: 0x1c, size: 0x4, def value: None
  int32_t ___timeOfLastSendCall;

  /// @brief Field <OperationByteCount>k__BackingField, offset: 0x20, size: 0x4, def value: None
  int32_t ____OperationByteCount_k__BackingField;

  /// @brief Field <OperationCount>k__BackingField, offset: 0x24, size: 0x4, def value: None
  int32_t ____OperationCount_k__BackingField;

  /// @brief Field <ResultByteCount>k__BackingField, offset: 0x28, size: 0x4, def value: None
  int32_t ____ResultByteCount_k__BackingField;

  /// @brief Field <ResultCount>k__BackingField, offset: 0x2c, size: 0x4, def value: None
  int32_t ____ResultCount_k__BackingField;

  /// @brief Field <EventByteCount>k__BackingField, offset: 0x30, size: 0x4, def value: None
  int32_t ____EventByteCount_k__BackingField;

  /// @brief Field <EventCount>k__BackingField, offset: 0x34, size: 0x4, def value: None
  int32_t ____EventCount_k__BackingField;

  /// @brief Field <LongestOpResponseCallback>k__BackingField, offset: 0x38, size: 0x4, def value: None
  int32_t ____LongestOpResponseCallback_k__BackingField;

  /// @brief Field <LongestOpResponseCallbackOpCode>k__BackingField, offset: 0x3c, size: 0x1, def value: None
  uint8_t ____LongestOpResponseCallbackOpCode_k__BackingField;

  /// @brief Field <LongestEventCallback>k__BackingField, offset: 0x40, size: 0x4, def value: None
  int32_t ____LongestEventCallback_k__BackingField;

  /// @brief Field <LongestMessageCallback>k__BackingField, offset: 0x44, size: 0x4, def value: None
  int32_t ____LongestMessageCallback_k__BackingField;

  /// @brief Field <LongestRawMessageCallback>k__BackingField, offset: 0x48, size: 0x4, def value: None
  int32_t ____LongestRawMessageCallback_k__BackingField;

  /// @brief Field <LongestEventCallbackCode>k__BackingField, offset: 0x4c, size: 0x1, def value: None
  uint8_t ____LongestEventCallbackCode_k__BackingField;

  /// @brief Field <LongestDeltaBetweenDispatching>k__BackingField, offset: 0x50, size: 0x4, def value: None
  int32_t ____LongestDeltaBetweenDispatching_k__BackingField;

  /// @brief Field <LongestDeltaBetweenSending>k__BackingField, offset: 0x54, size: 0x4, def value: None
  int32_t ____LongestDeltaBetweenSending_k__BackingField;

  /// @brief Field <DispatchIncomingCommandsCalls>k__BackingField, offset: 0x58, size: 0x4, def value: None
  int32_t ____DispatchIncomingCommandsCalls_k__BackingField;

  /// @brief Field <SendOutgoingCommandsCalls>k__BackingField, offset: 0x5c, size: 0x4, def value: None
  int32_t ____SendOutgoingCommandsCalls_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::TrafficStatsGameLevel, 0x60>, "Size mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TrafficStatsGameLevel, ___watch) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TrafficStatsGameLevel, ___timeOfLastDispatchCall) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TrafficStatsGameLevel, ___timeOfLastSendCall) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TrafficStatsGameLevel, ____OperationByteCount_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TrafficStatsGameLevel, ____OperationCount_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TrafficStatsGameLevel, ____ResultByteCount_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TrafficStatsGameLevel, ____ResultCount_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TrafficStatsGameLevel, ____EventByteCount_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TrafficStatsGameLevel, ____EventCount_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TrafficStatsGameLevel, ____LongestOpResponseCallback_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TrafficStatsGameLevel, ____LongestOpResponseCallbackOpCode_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TrafficStatsGameLevel, ____LongestEventCallback_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TrafficStatsGameLevel, ____LongestMessageCallback_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TrafficStatsGameLevel, ____LongestRawMessageCallback_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TrafficStatsGameLevel, ____LongestEventCallbackCode_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TrafficStatsGameLevel, ____LongestDeltaBetweenDispatching_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TrafficStatsGameLevel, ____LongestDeltaBetweenSending_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TrafficStatsGameLevel, ____DispatchIncomingCommandsCalls_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TrafficStatsGameLevel, ____SendOutgoingCommandsCalls_k__BackingField) == 0x5c, "Offset mismatch!");

} // namespace ExitGames::Client::Photon
NEED_NO_BOX(::ExitGames::Client::Photon::TrafficStatsGameLevel);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::TrafficStatsGameLevel*, "ExitGames.Client.Photon", "TrafficStatsGameLevel");
