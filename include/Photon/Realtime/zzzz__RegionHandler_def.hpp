#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RegionHandler)
namespace ExitGames::Client::Photon {
class OperationResponse;
}
namespace Photon::Realtime {
class RegionPinger;
}
namespace Photon::Realtime {
class Region;
}
namespace Photon::Realtime {
class __RegionHandler____c;
}
namespace Photon::Realtime {
class __RegionHandler____c__DisplayClass23_0;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Photon::Realtime {
class RegionHandler;
}
namespace Photon::Realtime {
class __RegionHandler____c;
}
namespace Photon::Realtime {
class __RegionHandler____c__DisplayClass23_0;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Realtime::RegionHandler);
MARK_REF_PTR_T(::Photon::Realtime::__RegionHandler____c);
MARK_REF_PTR_T(::Photon::Realtime::__RegionHandler____c__DisplayClass23_0);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::RegionHandler::<>c*
class CORDL_TYPE __RegionHandler____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Photon::Realtime::__RegionHandler____c* __9;

  /// @brief Field <>9__8_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__8_0, put = setStaticF___9__8_0))::System::Comparison_1<::Photon::Realtime::Region*>* __9__8_0;

  static inline ::Photon::Realtime::__RegionHandler____c* New_ctor();

  /// @brief Method .ctor, addr 0x224a634, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_BestRegion>b__8_0, addr 0x224a63c, size 0x34, virtual false, abstract: false, final false
  inline int32_t _get_BestRegion_b__8_0(::Photon::Realtime::Region* a, ::Photon::Realtime::Region* b);

  static inline ::Photon::Realtime::__RegionHandler____c* getStaticF___9();

  static inline ::System::Comparison_1<::Photon::Realtime::Region*>* getStaticF___9__8_0();

  static inline void setStaticF___9(::Photon::Realtime::__RegionHandler____c* value);

  static inline void setStaticF___9__8_0(::System::Comparison_1<::Photon::Realtime::Region*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RegionHandler____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RegionHandler____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RegionHandler____c(__RegionHandler____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RegionHandler____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RegionHandler____c(__RegionHandler____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::__RegionHandler____c, 0x10>, "Size mismatch!");

} // namespace Photon::Realtime
// Type: ::<>c__DisplayClass23_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::RegionHandler::<>c__DisplayClass23_0*
class CORDL_TYPE __RegionHandler____c__DisplayClass23_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field prevBestRegionCode, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_prevBestRegionCode, put = __cordl_internal_set_prevBestRegionCode))::StringW prevBestRegionCode;

  static inline ::Photon::Realtime::__RegionHandler____c__DisplayClass23_0* New_ctor();

  /// @brief Method <PingMinimumOfRegions>b__0, addr 0x224a670, size 0x28, virtual false, abstract: false, final false
  inline bool _PingMinimumOfRegions_b__0(::Photon::Realtime::Region* r);

  constexpr ::StringW const& __cordl_internal_get_prevBestRegionCode() const;

  constexpr ::StringW& __cordl_internal_get_prevBestRegionCode();

  constexpr void __cordl_internal_set_prevBestRegionCode(::StringW value);

  /// @brief Method .ctor, addr 0x2249c38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RegionHandler____c__DisplayClass23_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RegionHandler____c__DisplayClass23_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RegionHandler____c__DisplayClass23_0(__RegionHandler____c__DisplayClass23_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RegionHandler____c__DisplayClass23_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RegionHandler____c__DisplayClass23_0(__RegionHandler____c__DisplayClass23_0 const&) = delete;

  /// @brief Field prevBestRegionCode, offset: 0x10, size: 0x8, def value: None
  ::StringW ___prevBestRegionCode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::__RegionHandler____c__DisplayClass23_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::__RegionHandler____c__DisplayClass23_0, ___prevBestRegionCode) == 0x10, "Offset mismatch!");

} // namespace Photon::Realtime
// Type: Photon.Realtime::RegionHandler
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::Photon.Realtime::RegionHandler*
class CORDL_TYPE RegionHandler : public ::System::Object {
public:
  // Declarations
  using __c = ::Photon::Realtime::__RegionHandler____c;

  using __c__DisplayClass23_0 = ::Photon::Realtime::__RegionHandler____c__DisplayClass23_0;

  __declspec(property(get = get_BestRegion))::Photon::Realtime::Region* BestRegion;

  __declspec(property(get = get_EnabledRegions, put = set_EnabledRegions))::System::Collections::Generic::List_1<::Photon::Realtime::Region*>* EnabledRegions;

  __declspec(property(get = get_IsPinging, put = set_IsPinging)) bool IsPinging;

  /// @brief Field PingImplementation, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PingImplementation, put = setStaticF_PingImplementation))::System::Type* PingImplementation;

  /// @brief Field PortToPingOverride, offset 0xffffffff, size 0x2
  static __declspec(property(get = getStaticF_PortToPingOverride, put = setStaticF_PortToPingOverride)) uint16_t PortToPingOverride;

  __declspec(property(get = get_SummaryToCache))::StringW SummaryToCache;

  /// @brief Field <EnabledRegions>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__EnabledRegions_k__BackingField,
                      put = __cordl_internal_set__EnabledRegions_k__BackingField))::System::Collections::Generic::List_1<::Photon::Realtime::Region*>* _EnabledRegions_k__BackingField;

  /// @brief Field <IsPinging>k__BackingField, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get__IsPinging_k__BackingField, put = __cordl_internal_set__IsPinging_k__BackingField)) bool _IsPinging_k__BackingField;

  /// @brief Field availableRegionCodes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_availableRegionCodes, put = __cordl_internal_set_availableRegionCodes))::StringW availableRegionCodes;

  /// @brief Field bestRegionCache, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_bestRegionCache, put = __cordl_internal_set_bestRegionCache))::Photon::Realtime::Region* bestRegionCache;

  /// @brief Field onCompleteCall, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_onCompleteCall, put = __cordl_internal_set_onCompleteCall))::System::Action_1<::Photon::Realtime::RegionHandler*>* onCompleteCall;

  /// @brief Field pingerList, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_pingerList, put = __cordl_internal_set_pingerList))::System::Collections::Generic::List_1<::Photon::Realtime::RegionPinger*>* pingerList;

  /// @brief Field previousPing, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_previousPing, put = __cordl_internal_set_previousPing)) int32_t previousPing;

  /// @brief Field previousSummaryProvided, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_previousSummaryProvided, put = __cordl_internal_set_previousSummaryProvided))::StringW previousSummaryProvided;

  /// @brief Method GetResults, addr 0x22498a0, size 0x290, virtual false, abstract: false, final false
  inline ::StringW GetResults();

  static inline ::Photon::Realtime::RegionHandler* New_ctor(uint16_t masterServerPortOverride);

  /// @brief Method OnPreferredRegionPinged, addr 0x224a304, size 0x60, virtual false, abstract: false, final false
  inline void OnPreferredRegionPinged(::Photon::Realtime::Region* preferredRegion);

  /// @brief Method OnRegionDone, addr 0x224a364, size 0x26c, virtual false, abstract: false, final false
  inline void OnRegionDone(::Photon::Realtime::Region* region);

  /// @brief Method PingEnabledRegions, addr 0x2249c40, size 0x384, virtual false, abstract: false, final false
  inline bool PingEnabledRegions();

  /// @brief Method PingMinimumOfRegions, addr 0x2240e18, size 0x3dc, virtual false, abstract: false, final false
  inline bool PingMinimumOfRegions(::System::Action_1<::Photon::Realtime::RegionHandler*>* onCompleteCallback, ::StringW previousSummary);

  /// @brief Method SetRegions, addr 0x2240980, size 0x2d4, virtual false, abstract: false, final false
  inline void SetRegions(::ExitGames::Client::Photon::OperationResponse* opGetRegions);

  constexpr ::System::Collections::Generic::List_1<::Photon::Realtime::Region*>*& __cordl_internal_get__EnabledRegions_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Photon::Realtime::Region*>*> const& __cordl_internal_get__EnabledRegions_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__IsPinging_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsPinging_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get_availableRegionCodes() const;

  constexpr ::StringW& __cordl_internal_get_availableRegionCodes();

  constexpr ::Photon::Realtime::Region*& __cordl_internal_get_bestRegionCache();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::Region*> const& __cordl_internal_get_bestRegionCache() const;

  constexpr ::System::Action_1<::Photon::Realtime::RegionHandler*>*& __cordl_internal_get_onCompleteCall();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Photon::Realtime::RegionHandler*>*> const& __cordl_internal_get_onCompleteCall() const;

  constexpr ::System::Collections::Generic::List_1<::Photon::Realtime::RegionPinger*>*& __cordl_internal_get_pingerList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Photon::Realtime::RegionPinger*>*> const& __cordl_internal_get_pingerList() const;

  constexpr int32_t const& __cordl_internal_get_previousPing() const;

  constexpr int32_t& __cordl_internal_get_previousPing();

  constexpr ::StringW const& __cordl_internal_get_previousSummaryProvided() const;

  constexpr ::StringW& __cordl_internal_get_previousSummaryProvided();

  constexpr void __cordl_internal_set__EnabledRegions_k__BackingField(::System::Collections::Generic::List_1<::Photon::Realtime::Region*>* value);

  constexpr void __cordl_internal_set__IsPinging_k__BackingField(bool value);

  constexpr void __cordl_internal_set_availableRegionCodes(::StringW value);

  constexpr void __cordl_internal_set_bestRegionCache(::Photon::Realtime::Region* value);

  constexpr void __cordl_internal_set_onCompleteCall(::System::Action_1<::Photon::Realtime::RegionHandler*>* value);

  constexpr void __cordl_internal_set_pingerList(::System::Collections::Generic::List_1<::Photon::Realtime::RegionPinger*>* value);

  constexpr void __cordl_internal_set_previousPing(int32_t value);

  constexpr void __cordl_internal_set_previousSummaryProvided(::StringW value);

  /// @brief Method .ctor, addr 0x22408d4, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(uint16_t masterServerPortOverride);

  static inline ::System::Type* getStaticF_PingImplementation();

  static inline uint16_t getStaticF_PortToPingOverride();

  /// @brief Method get_BestRegion, addr 0x22443f8, size 0x140, virtual false, abstract: false, final false
  inline ::Photon::Realtime::Region* get_BestRegion();

  /// @brief Method get_EnabledRegions, addr 0x2249890, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Photon::Realtime::Region*>* get_EnabledRegions();

  /// @brief Method get_IsPinging, addr 0x2249c24, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsPinging();

  /// @brief Method get_SummaryToCache, addr 0x224424c, size 0x1ac, virtual false, abstract: false, final false
  inline ::StringW get_SummaryToCache();

  static inline void setStaticF_PingImplementation(::System::Type* value);

  static inline void setStaticF_PortToPingOverride(uint16_t value);

  /// @brief Method set_EnabledRegions, addr 0x2249898, size 0x8, virtual false, abstract: false, final false
  inline void set_EnabledRegions(::System::Collections::Generic::List_1<::Photon::Realtime::Region*>* value);

  /// @brief Method set_IsPinging, addr 0x2249c2c, size 0xc, virtual false, abstract: false, final false
  inline void set_IsPinging(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RegionHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RegionHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RegionHandler(RegionHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RegionHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RegionHandler(RegionHandler const&) = delete;

  /// @brief Field <EnabledRegions>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Photon::Realtime::Region*>* ____EnabledRegions_k__BackingField;

  /// @brief Field availableRegionCodes, offset: 0x18, size: 0x8, def value: None
  ::StringW ___availableRegionCodes;

  /// @brief Field bestRegionCache, offset: 0x20, size: 0x8, def value: None
  ::Photon::Realtime::Region* ___bestRegionCache;

  /// @brief Field pingerList, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Photon::Realtime::RegionPinger*>* ___pingerList;

  /// @brief Field onCompleteCall, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::Photon::Realtime::RegionHandler*>* ___onCompleteCall;

  /// @brief Field previousPing, offset: 0x38, size: 0x4, def value: None
  int32_t ___previousPing;

  /// @brief Field <IsPinging>k__BackingField, offset: 0x3c, size: 0x1, def value: None
  bool ____IsPinging_k__BackingField;

  /// @brief Field previousSummaryProvided, offset: 0x40, size: 0x8, def value: None
  ::StringW ___previousSummaryProvided;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::RegionHandler, 0x48>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::RegionHandler, ____EnabledRegions_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RegionHandler, ___availableRegionCodes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RegionHandler, ___bestRegionCache) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RegionHandler, ___pingerList) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RegionHandler, ___onCompleteCall) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RegionHandler, ___previousPing) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RegionHandler, ____IsPinging_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RegionHandler, ___previousSummaryProvided) == 0x40, "Offset mismatch!");

} // namespace Photon::Realtime
NEED_NO_BOX(::Photon::Realtime::RegionHandler);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::RegionHandler*, "Photon.Realtime", "RegionHandler");
NEED_NO_BOX(::Photon::Realtime::__RegionHandler____c);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::__RegionHandler____c*, "Photon.Realtime", "RegionHandler/<>c");
NEED_NO_BOX(::Photon::Realtime::__RegionHandler____c__DisplayClass23_0);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::__RegionHandler____c__DisplayClass23_0*, "Photon.Realtime", "RegionHandler/<>c__DisplayClass23_0");
