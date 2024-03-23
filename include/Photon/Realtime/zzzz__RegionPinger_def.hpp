#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RegionPinger)
namespace Photon::Realtime {
class PhotonPing;
}
namespace Photon::Realtime {
class Region;
}
namespace Photon::Realtime {
class __RegionPinger___RegionPingCoroutine_d__17;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Photon::Realtime {
class RegionPinger;
}
namespace Photon::Realtime {
class __RegionPinger___RegionPingCoroutine_d__17;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Realtime::RegionPinger);
MARK_REF_PTR_T(::Photon::Realtime::__RegionPinger___RegionPingCoroutine_d__17);
// Type: ::<RegionPingCoroutine>d__17
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::RegionPinger::<RegionPingCoroutine>d__17*
class CORDL_TYPE __RegionPinger___RegionPingCoroutine_d__17 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Photon::Realtime::RegionPinger* __4__this;

  /// @brief Field <i>5__5, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__i_5__5, put = __cordl_internal_set__i_5__5)) int32_t _i_5__5;

  /// @brief Field <replyCount>5__3, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__replyCount_5__3, put = __cordl_internal_set__replyCount_5__3)) int32_t _replyCount_5__3;

  /// @brief Field <rttSum>5__2, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__rttSum_5__2, put = __cordl_internal_set__rttSum_5__2)) int32_t _rttSum_5__2;

  /// @brief Field <sw>5__4, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__sw_5__4, put = __cordl_internal_set__sw_5__4))::System::Diagnostics::Stopwatch* _sw_5__4;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x160e19c, size 0x674, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Photon::Realtime::__RegionPinger___RegionPingCoroutine_d__17* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x160e810, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x160e818, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x160e858, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x160e198, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::Photon::Realtime::RegionPinger*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::RegionPinger*> const& __cordl_internal_get___4__this() const;

  constexpr int32_t const& __cordl_internal_get__i_5__5() const;

  constexpr int32_t& __cordl_internal_get__i_5__5();

  constexpr int32_t const& __cordl_internal_get__replyCount_5__3() const;

  constexpr int32_t& __cordl_internal_get__replyCount_5__3();

  constexpr int32_t const& __cordl_internal_get__rttSum_5__2() const;

  constexpr int32_t& __cordl_internal_get__rttSum_5__2();

  constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get__sw_5__4();

  constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::Stopwatch*> const& __cordl_internal_get__sw_5__4() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::Photon::Realtime::RegionPinger* value);

  constexpr void __cordl_internal_set__i_5__5(int32_t value);

  constexpr void __cordl_internal_set__replyCount_5__3(int32_t value);

  constexpr void __cordl_internal_set__rttSum_5__2(int32_t value);

  constexpr void __cordl_internal_set__sw_5__4(::System::Diagnostics::Stopwatch* value);

  /// @brief Method .ctor, addr 0x160e170, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RegionPinger___RegionPingCoroutine_d__17();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RegionPinger___RegionPingCoroutine_d__17", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RegionPinger___RegionPingCoroutine_d__17(__RegionPinger___RegionPingCoroutine_d__17&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RegionPinger___RegionPingCoroutine_d__17", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RegionPinger___RegionPingCoroutine_d__17(__RegionPinger___RegionPingCoroutine_d__17 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Photon::Realtime::RegionPinger* _____4__this;

  /// @brief Field <rttSum>5__2, offset: 0x28, size: 0x4, def value: None
  int32_t ____rttSum_5__2;

  /// @brief Field <replyCount>5__3, offset: 0x2c, size: 0x4, def value: None
  int32_t ____replyCount_5__3;

  /// @brief Field <sw>5__4, offset: 0x30, size: 0x8, def value: None
  ::System::Diagnostics::Stopwatch* ____sw_5__4;

  /// @brief Field <i>5__5, offset: 0x38, size: 0x4, def value: None
  int32_t ____i_5__5;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::__RegionPinger___RegionPingCoroutine_d__17, 0x40>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::__RegionPinger___RegionPingCoroutine_d__17, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::__RegionPinger___RegionPingCoroutine_d__17, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::__RegionPinger___RegionPingCoroutine_d__17, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::__RegionPinger___RegionPingCoroutine_d__17, ____rttSum_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::__RegionPinger___RegionPingCoroutine_d__17, ____replyCount_5__3) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::__RegionPinger___RegionPingCoroutine_d__17, ____sw_5__4) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::__RegionPinger___RegionPingCoroutine_d__17, ____i_5__5) == 0x38, "Offset mismatch!");

} // namespace Photon::Realtime
// Type: Photon.Realtime::RegionPinger
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::Photon.Realtime::RegionPinger*
class CORDL_TYPE RegionPinger : public ::System::Object {
public:
  // Declarations
  using _RegionPingCoroutine_d__17 = ::Photon::Realtime::__RegionPinger___RegionPingCoroutine_d__17;

  /// @brief Field Attempts, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_Attempts, put = setStaticF_Attempts)) int32_t Attempts;

  /// @brief Field CurrentAttempt, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_CurrentAttempt, put = __cordl_internal_set_CurrentAttempt)) int32_t CurrentAttempt;

  __declspec(property(get = get_Done, put = set_Done)) bool Done;

  /// @brief Field MaxMilliseconsPerPing, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_MaxMilliseconsPerPing, put = setStaticF_MaxMilliseconsPerPing)) int32_t MaxMilliseconsPerPing;

  /// @brief Field PingWhenFailed, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_PingWhenFailed, put = setStaticF_PingWhenFailed)) int32_t PingWhenFailed;

  /// @brief Field <Done>k__BackingField, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get__Done_k__BackingField, put = __cordl_internal_set__Done_k__BackingField)) bool _Done_k__BackingField;

  /// @brief Field onDoneCall, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_onDoneCall, put = __cordl_internal_set_onDoneCall))::System::Action_1<::Photon::Realtime::Region*>* onDoneCall;

  /// @brief Field ping, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_ping, put = __cordl_internal_set_ping))::Photon::Realtime::PhotonPing* ping;

  /// @brief Field region, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_region, put = __cordl_internal_set_region))::Photon::Realtime::Region* region;

  /// @brief Field regionAddress, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_regionAddress, put = __cordl_internal_set_regionAddress))::StringW regionAddress;

  /// @brief Field rttResults, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_rttResults, put = __cordl_internal_set_rttResults))::System::Collections::Generic::List_1<int32_t>* rttResults;

  /// @brief Method GetPingImplementation, addr 0x224a6ac, size 0x1a4, virtual false, abstract: false, final false
  inline ::Photon::Realtime::PhotonPing* GetPingImplementation();

  /// @brief Method GetResults, addr 0x2249b30, size 0xf4, virtual false, abstract: false, final false
  inline ::StringW GetResults();

  static inline ::Photon::Realtime::RegionPinger* New_ctor(::Photon::Realtime::Region* region, ::System::Action_1<::Photon::Realtime::Region*>* onDoneCallback);

  /// @brief Method RegionPingCoroutine, addr 0x224ae30, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* RegionPingCoroutine();

  /// @brief Method RegionPingThreaded, addr 0x224aab8, size 0x378, virtual false, abstract: false, final false
  inline bool RegionPingThreaded();

  /// @brief Method ResolveHost, addr 0x224a850, size 0x268, virtual false, abstract: false, final false
  static inline ::StringW ResolveHost(::StringW hostName);

  /// @brief Method Start, addr 0x224a054, size 0x2b0, virtual false, abstract: false, final false
  inline bool Start();

  /// @brief Method <Start>b__15_0, addr 0x224aef0, size 0x4, virtual false, abstract: false, final false
  inline void _Start_b__15_0(::System::Object* o);

  constexpr int32_t const& __cordl_internal_get_CurrentAttempt() const;

  constexpr int32_t& __cordl_internal_get_CurrentAttempt();

  constexpr bool const& __cordl_internal_get__Done_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Done_k__BackingField();

  constexpr ::System::Action_1<::Photon::Realtime::Region*>*& __cordl_internal_get_onDoneCall();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Photon::Realtime::Region*>*> const& __cordl_internal_get_onDoneCall() const;

  constexpr ::Photon::Realtime::PhotonPing*& __cordl_internal_get_ping();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::PhotonPing*> const& __cordl_internal_get_ping() const;

  constexpr ::Photon::Realtime::Region*& __cordl_internal_get_region();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::Region*> const& __cordl_internal_get_region() const;

  constexpr ::StringW const& __cordl_internal_get_regionAddress() const;

  constexpr ::StringW& __cordl_internal_get_regionAddress();

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_rttResults();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __cordl_internal_get_rttResults() const;

  constexpr void __cordl_internal_set_CurrentAttempt(int32_t value);

  constexpr void __cordl_internal_set__Done_k__BackingField(bool value);

  constexpr void __cordl_internal_set_onDoneCall(::System::Action_1<::Photon::Realtime::Region*>* value);

  constexpr void __cordl_internal_set_ping(::Photon::Realtime::PhotonPing* value);

  constexpr void __cordl_internal_set_region(::Photon::Realtime::Region* value);

  constexpr void __cordl_internal_set_regionAddress(::StringW value);

  constexpr void __cordl_internal_set_rttResults(::System::Collections::Generic::List_1<int32_t>* value);

  /// @brief Method .ctor, addr 0x2249fc4, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::Photon::Realtime::Region* region, ::System::Action_1<::Photon::Realtime::Region*>* onDoneCallback);

  static inline int32_t getStaticF_Attempts();

  static inline int32_t getStaticF_MaxMilliseconsPerPing();

  static inline int32_t getStaticF_PingWhenFailed();

  /// @brief Method get_Done, addr 0x224a698, size 0x8, virtual false, abstract: false, final false
  inline bool get_Done();

  static inline void setStaticF_Attempts(int32_t value);

  static inline void setStaticF_MaxMilliseconsPerPing(int32_t value);

  static inline void setStaticF_PingWhenFailed(int32_t value);

  /// @brief Method set_Done, addr 0x224a6a0, size 0xc, virtual false, abstract: false, final false
  inline void set_Done(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RegionPinger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RegionPinger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RegionPinger(RegionPinger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RegionPinger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RegionPinger(RegionPinger const&) = delete;

  /// @brief Field region, offset: 0x10, size: 0x8, def value: None
  ::Photon::Realtime::Region* ___region;

  /// @brief Field regionAddress, offset: 0x18, size: 0x8, def value: None
  ::StringW ___regionAddress;

  /// @brief Field CurrentAttempt, offset: 0x20, size: 0x4, def value: None
  int32_t ___CurrentAttempt;

  /// @brief Field <Done>k__BackingField, offset: 0x24, size: 0x1, def value: None
  bool ____Done_k__BackingField;

  /// @brief Field onDoneCall, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::Photon::Realtime::Region*>* ___onDoneCall;

  /// @brief Field ping, offset: 0x30, size: 0x8, def value: None
  ::Photon::Realtime::PhotonPing* ___ping;

  /// @brief Field rttResults, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___rttResults;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::RegionPinger, 0x40>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::RegionPinger, ___region) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RegionPinger, ___regionAddress) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RegionPinger, ___CurrentAttempt) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RegionPinger, ____Done_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RegionPinger, ___onDoneCall) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RegionPinger, ___ping) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RegionPinger, ___rttResults) == 0x38, "Offset mismatch!");

} // namespace Photon::Realtime
NEED_NO_BOX(::Photon::Realtime::RegionPinger);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::RegionPinger*, "Photon.Realtime", "RegionPinger");
NEED_NO_BOX(::Photon::Realtime::__RegionPinger___RegionPingCoroutine_d__17);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::__RegionPinger___RegionPingCoroutine_d__17*, "Photon.Realtime", "RegionPinger/<RegionPingCoroutine>d__17");
