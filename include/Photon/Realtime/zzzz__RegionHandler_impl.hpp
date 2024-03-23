#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Realtime/zzzz__RegionHandler_def.hpp"
#include "ExitGames/Client/Photon/zzzz__OperationResponse_def.hpp"
#include "Photon/Realtime/zzzz__RegionHandler_def.hpp"
#include "Photon/Realtime/zzzz__RegionPinger_def.hpp"
#include "Photon/Realtime/zzzz__Region_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::__RegionHandler____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::__RegionHandler____c::*)()>(&::Photon::Realtime::__RegionHandler____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224a634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::__RegionHandler____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::__RegionHandler____c._get_BestRegion_b__8_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Photon::Realtime::__RegionHandler____c::*)(::Photon::Realtime::Region*, ::Photon::Realtime::Region*)>(
    &::Photon::Realtime::__RegionHandler____c::_get_BestRegion_b__8_0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x224a63c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::__RegionHandler____c*>::get(), "<get_BestRegion>b__8_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Region*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Region*>::get() })));
    return ___internal_method;
  }
};
inline void Photon::Realtime::__RegionHandler____c::setStaticF___9(::Photon::Realtime::__RegionHandler____c* value) {
  ::cordl_internals::setStaticField<::Photon::Realtime::__RegionHandler____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::__RegionHandler____c*>::get>(
      std::forward<::Photon::Realtime::__RegionHandler____c*>(value));
}
inline ::Photon::Realtime::__RegionHandler____c* Photon::Realtime::__RegionHandler____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Photon::Realtime::__RegionHandler____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::__RegionHandler____c*>::get>();
}
inline void Photon::Realtime::__RegionHandler____c::setStaticF___9__8_0(::System::Comparison_1<::Photon::Realtime::Region*>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::Photon::Realtime::Region*>*, "<>9__8_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::__RegionHandler____c*>::get>(
      std::forward<::System::Comparison_1<::Photon::Realtime::Region*>*>(value));
}
inline ::System::Comparison_1<::Photon::Realtime::Region*>* Photon::Realtime::__RegionHandler____c::getStaticF___9__8_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::Photon::Realtime::Region*>*, "<>9__8_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::__RegionHandler____c*>::get>();
}
inline ::Photon::Realtime::__RegionHandler____c* Photon::Realtime::__RegionHandler____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Realtime::__RegionHandler____c*>());
}
inline void Photon::Realtime::__RegionHandler____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::__RegionHandler____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t Photon::Realtime::__RegionHandler____c::_get_BestRegion_b__8_0(::Photon::Realtime::Region* a, ::Photon::Realtime::Region* b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::__RegionHandler____c*>::get(), "<get_BestRegion>b__8_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Region*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Region*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, a, b);
}
// Ctor Parameters []
constexpr ::Photon::Realtime::__RegionHandler____c::__RegionHandler____c() {}
//  Writing Method size for method: ::Photon::Realtime::__RegionHandler____c__DisplayClass23_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::__RegionHandler____c__DisplayClass23_0::*)()>(
    &::Photon::Realtime::__RegionHandler____c__DisplayClass23_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2249c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::__RegionHandler____c__DisplayClass23_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::__RegionHandler____c__DisplayClass23_0._PingMinimumOfRegions_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::__RegionHandler____c__DisplayClass23_0::*)(::Photon::Realtime::Region*)>(
    &::Photon::Realtime::__RegionHandler____c__DisplayClass23_0::_PingMinimumOfRegions_b__0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x224a670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::__RegionHandler____c__DisplayClass23_0*>::get(), "<PingMinimumOfRegions>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Region*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Photon::Realtime::__RegionHandler____c__DisplayClass23_0::__cordl_internal_get_prevBestRegionCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prevBestRegionCode;
}
constexpr ::StringW const& Photon::Realtime::__RegionHandler____c__DisplayClass23_0::__cordl_internal_get_prevBestRegionCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prevBestRegionCode;
}
constexpr void Photon::Realtime::__RegionHandler____c__DisplayClass23_0::__cordl_internal_set_prevBestRegionCode(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prevBestRegionCode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Photon::Realtime::__RegionHandler____c__DisplayClass23_0* Photon::Realtime::__RegionHandler____c__DisplayClass23_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Realtime::__RegionHandler____c__DisplayClass23_0*>());
}
inline void Photon::Realtime::__RegionHandler____c__DisplayClass23_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::__RegionHandler____c__DisplayClass23_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Photon::Realtime::__RegionHandler____c__DisplayClass23_0::_PingMinimumOfRegions_b__0(::Photon::Realtime::Region* r) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::__RegionHandler____c__DisplayClass23_0*>::get(), "<PingMinimumOfRegions>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Region*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, r);
}
// Ctor Parameters []
constexpr ::Photon::Realtime::__RegionHandler____c__DisplayClass23_0::__RegionHandler____c__DisplayClass23_0() {}
//  Writing Method size for method: ::Photon::Realtime::RegionHandler.get_EnabledRegions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Photon::Realtime::Region*>* (::Photon::Realtime::RegionHandler::*)()>(
    &::Photon::Realtime::RegionHandler::get_EnabledRegions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2249890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::RegionHandler*>::get(), "get_EnabledRegions",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RegionHandler.set_EnabledRegions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::RegionHandler::*)(::System::Collections::Generic::List_1<::Photon::Realtime::Region*>*)>(
    &::Photon::Realtime::RegionHandler::set_EnabledRegions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2249898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::RegionHandler*>::get(), "set_EnabledRegions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Photon::Realtime::Region*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RegionHandler.get_BestRegion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Realtime::Region* (::Photon::Realtime::RegionHandler::*)()>(
    &::Photon::Realtime::RegionHandler::get_BestRegion)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x22443f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::RegionHandler*>::get(), "get_BestRegion",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RegionHandler.get_SummaryToCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Photon::Realtime::RegionHandler::*)()>(&::Photon::Realtime::RegionHandler::get_SummaryToCache)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x224424c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::RegionHandler*>::get(), "get_SummaryToCache",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RegionHandler.GetResults
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Photon::Realtime::RegionHandler::*)()>(&::Photon::Realtime::RegionHandler::GetResults)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x22498a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::RegionHandler*>::get(), "GetResults",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RegionHandler.SetRegions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::RegionHandler::*)(::ExitGames::Client::Photon::OperationResponse*)>(
    &::Photon::Realtime::RegionHandler::SetRegions)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x2240980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::RegionHandler*>::get(), "SetRegions", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::OperationResponse*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RegionHandler.get_IsPinging
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::RegionHandler::*)()>(&::Photon::Realtime::RegionHandler::get_IsPinging)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2249c24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::RegionHandler*>::get(), "get_IsPinging",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RegionHandler.set_IsPinging
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::RegionHandler::*)(bool)>(&::Photon::Realtime::RegionHandler::set_IsPinging)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2249c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::RegionHandler*>::get(), "set_IsPinging",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RegionHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::RegionHandler::*)(uint16_t)>(&::Photon::Realtime::RegionHandler::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x22408d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::RegionHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RegionHandler.PingMinimumOfRegions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::RegionHandler::*)(::System::Action_1<::Photon::Realtime::RegionHandler*>*, ::StringW)>(
    &::Photon::Realtime::RegionHandler::PingMinimumOfRegions)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x2240e18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::RegionHandler*>::get(), "PingMinimumOfRegions", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Photon::Realtime::RegionHandler*>*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RegionHandler.OnPreferredRegionPinged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::RegionHandler::*)(::Photon::Realtime::Region*)>(
    &::Photon::Realtime::RegionHandler::OnPreferredRegionPinged)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x224a304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::RegionHandler*>::get(), "OnPreferredRegionPinged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Region*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RegionHandler.PingEnabledRegions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::RegionHandler::*)()>(&::Photon::Realtime::RegionHandler::PingEnabledRegions)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x2249c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::RegionHandler*>::get(), "PingEnabledRegions",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::RegionHandler.OnRegionDone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::RegionHandler::*)(::Photon::Realtime::Region*)>(
    &::Photon::Realtime::RegionHandler::OnRegionDone)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x224a364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::RegionHandler*>::get(), "OnRegionDone", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Region*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Photon::Realtime::Region*>*& Photon::Realtime::RegionHandler::__cordl_internal_get__EnabledRegions_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EnabledRegions_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Photon::Realtime::Region*>*> const&
Photon::Realtime::RegionHandler::__cordl_internal_get__EnabledRegions_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EnabledRegions_k__BackingField;
}
constexpr void Photon::Realtime::RegionHandler::__cordl_internal_set__EnabledRegions_k__BackingField(::System::Collections::Generic::List_1<::Photon::Realtime::Region*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____EnabledRegions_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Photon::Realtime::RegionHandler::__cordl_internal_get_availableRegionCodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___availableRegionCodes;
}
constexpr ::StringW const& Photon::Realtime::RegionHandler::__cordl_internal_get_availableRegionCodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___availableRegionCodes;
}
constexpr void Photon::Realtime::RegionHandler::__cordl_internal_set_availableRegionCodes(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___availableRegionCodes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Photon::Realtime::Region*& Photon::Realtime::RegionHandler::__cordl_internal_get_bestRegionCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bestRegionCache;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::Region*> const& Photon::Realtime::RegionHandler::__cordl_internal_get_bestRegionCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bestRegionCache;
}
constexpr void Photon::Realtime::RegionHandler::__cordl_internal_set_bestRegionCache(::Photon::Realtime::Region* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bestRegionCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Photon::Realtime::RegionPinger*>*& Photon::Realtime::RegionHandler::__cordl_internal_get_pingerList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pingerList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Photon::Realtime::RegionPinger*>*> const&
Photon::Realtime::RegionHandler::__cordl_internal_get_pingerList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pingerList;
}
constexpr void Photon::Realtime::RegionHandler::__cordl_internal_set_pingerList(::System::Collections::Generic::List_1<::Photon::Realtime::RegionPinger*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pingerList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::Photon::Realtime::RegionHandler*>*& Photon::Realtime::RegionHandler::__cordl_internal_get_onCompleteCall() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onCompleteCall;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Photon::Realtime::RegionHandler*>*> const& Photon::Realtime::RegionHandler::__cordl_internal_get_onCompleteCall() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onCompleteCall;
}
constexpr void Photon::Realtime::RegionHandler::__cordl_internal_set_onCompleteCall(::System::Action_1<::Photon::Realtime::RegionHandler*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onCompleteCall)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Photon::Realtime::RegionHandler::__cordl_internal_get_previousPing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousPing;
}
constexpr int32_t const& Photon::Realtime::RegionHandler::__cordl_internal_get_previousPing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousPing;
}
constexpr void Photon::Realtime::RegionHandler::__cordl_internal_set_previousPing(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___previousPing = value;
}
constexpr bool& Photon::Realtime::RegionHandler::__cordl_internal_get__IsPinging_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsPinging_k__BackingField;
}
constexpr bool const& Photon::Realtime::RegionHandler::__cordl_internal_get__IsPinging_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsPinging_k__BackingField;
}
constexpr void Photon::Realtime::RegionHandler::__cordl_internal_set__IsPinging_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsPinging_k__BackingField = value;
}
constexpr ::StringW& Photon::Realtime::RegionHandler::__cordl_internal_get_previousSummaryProvided() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousSummaryProvided;
}
constexpr ::StringW const& Photon::Realtime::RegionHandler::__cordl_internal_get_previousSummaryProvided() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousSummaryProvided;
}
constexpr void Photon::Realtime::RegionHandler::__cordl_internal_set_previousSummaryProvided(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___previousSummaryProvided)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Photon::Realtime::RegionHandler::setStaticF_PingImplementation(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "PingImplementation", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::RegionHandler*>::get>(
      std::forward<::System::Type*>(value));
}
inline ::System::Type* Photon::Realtime::RegionHandler::getStaticF_PingImplementation() {
  return ::cordl_internals::getStaticField<::System::Type*, "PingImplementation", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::RegionHandler*>::get>();
}
inline void Photon::Realtime::RegionHandler::setStaticF_PortToPingOverride(uint16_t value) {
  ::cordl_internals::setStaticField<uint16_t, "PortToPingOverride", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::RegionHandler*>::get>(std::forward<uint16_t>(value));
}
inline uint16_t Photon::Realtime::RegionHandler::getStaticF_PortToPingOverride() {
  return ::cordl_internals::getStaticField<uint16_t, "PortToPingOverride", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::RegionHandler*>::get>();
}
inline ::System::Collections::Generic::List_1<::Photon::Realtime::Region*>* Photon::Realtime::RegionHandler::get_EnabledRegions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::RegionHandler*>::get(), "get_EnabledRegions",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Photon::Realtime::Region*>*, false>(this, ___internal_method);
}
inline void Photon::Realtime::RegionHandler::set_EnabledRegions(::System::Collections::Generic::List_1<::Photon::Realtime::Region*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::RegionHandler*>::get(), "set_EnabledRegions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Photon::Realtime::Region*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Photon::Realtime::Region* Photon::Realtime::RegionHandler::get_BestRegion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::RegionHandler*>::get(), "get_BestRegion",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::Region*, false>(this, ___internal_method);
}
inline ::StringW Photon::Realtime::RegionHandler::get_SummaryToCache() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::RegionHandler*>::get(), "get_SummaryToCache",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Photon::Realtime::RegionHandler::GetResults() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::RegionHandler*>::get(), "GetResults",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Photon::Realtime::RegionHandler::SetRegions(::ExitGames::Client::Photon::OperationResponse* opGetRegions) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::RegionHandler*>::get(), "SetRegions", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::OperationResponse*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, opGetRegions);
}
inline bool Photon::Realtime::RegionHandler::get_IsPinging() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::RegionHandler*>::get(), "get_IsPinging",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Photon::Realtime::RegionHandler::set_IsPinging(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::RegionHandler*>::get(), "set_IsPinging",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
/// @param masterServerPortOverride: uint16_t (default: static_cast<uint16_t>(0x0u))
inline ::Photon::Realtime::RegionHandler* Photon::Realtime::RegionHandler::New_ctor(uint16_t masterServerPortOverride) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Realtime::RegionHandler*>(masterServerPortOverride));
}
/// @param masterServerPortOverride: uint16_t (default: static_cast<uint16_t>(0x0u))
inline void Photon::Realtime::RegionHandler::_ctor(uint16_t masterServerPortOverride) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::RegionHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, masterServerPortOverride);
}
inline bool Photon::Realtime::RegionHandler::PingMinimumOfRegions(::System::Action_1<::Photon::Realtime::RegionHandler*>* onCompleteCallback, ::StringW previousSummary) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::RegionHandler*>::get(), "PingMinimumOfRegions", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Photon::Realtime::RegionHandler*>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, onCompleteCallback, previousSummary);
}
inline void Photon::Realtime::RegionHandler::OnPreferredRegionPinged(::Photon::Realtime::Region* preferredRegion) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::RegionHandler*>::get(), "OnPreferredRegionPinged", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Region*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, preferredRegion);
}
inline bool Photon::Realtime::RegionHandler::PingEnabledRegions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::RegionHandler*>::get(), "PingEnabledRegions",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Photon::Realtime::RegionHandler::OnRegionDone(::Photon::Realtime::Region* region) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::RegionHandler*>::get(), "OnRegionDone", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Region*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, region);
}
// Ctor Parameters []
constexpr ::Photon::Realtime::RegionHandler::RegionHandler() {}
