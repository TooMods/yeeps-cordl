#pragma once
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "GlobalNamespace/zzzz__GlobalRotation_def.hpp"
#include "GlobalNamespace/zzzz__RotationItem_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GlobalRotation.get_doesExpire
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GlobalRotation::*)()>(&::GlobalNamespace::GlobalRotation::get_doesExpire)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x15978d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GlobalRotation>::get(), "get_doesExpire",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GlobalRotation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GlobalRotation::*)(
    ::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::GlobalNamespace::RotationItem, ::Array<::GlobalNamespace::RotationItem>*>>*, ::System::DateTime,
    ::System::Nullable_1<::System::DateTime>)>(&::GlobalNamespace::GlobalRotation::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1597914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GlobalRotation>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::GlobalNamespace::RotationItem, ::Array<::GlobalNamespace::RotationItem>*>>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::DateTime>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GlobalRotation.IsExpired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GlobalRotation::*)()>(&::GlobalNamespace::GlobalRotation::IsExpired)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x1597924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GlobalRotation>::get(), "IsExpired",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GlobalRotation.IsWithin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GlobalRotation::*)(::System::DateTime)>(&::GlobalNamespace::GlobalRotation::IsWithin)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1597a08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GlobalRotation>::get(), "IsWithin", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GlobalRotation.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::GlobalRotation::*)()>(&::GlobalNamespace::GlobalRotation::ToString)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x1597af8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GlobalRotation>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GlobalRotation>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GlobalRotation.GetItemDebugString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::GlobalRotation::*)()>(&::GlobalNamespace::GlobalRotation::GetItemDebugString)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x1597e60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GlobalRotation>::get(), "GetItemDebugString",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::GlobalRotation::get_doesExpire() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GlobalRotation>::get(), "get_doesExpire",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void
GlobalNamespace::GlobalRotation::_ctor(::StringW rotationKey,
                                       ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::GlobalNamespace::RotationItem, ::Array<::GlobalNamespace::RotationItem>*>>* rotationItems,
                                       ::System::DateTime startTime, ::System::Nullable_1<::System::DateTime> expireTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GlobalRotation>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::GlobalNamespace::RotationItem, ::Array<::GlobalNamespace::RotationItem>*>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::DateTime>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rotationKey, rotationItems, startTime, expireTime);
}
inline bool GlobalNamespace::GlobalRotation::IsExpired() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GlobalRotation>::get(), "IsExpired",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GlobalRotation::IsWithin(::System::DateTime dateTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GlobalRotation>::get(), "IsWithin", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, dateTime);
}
inline ::StringW GlobalNamespace::GlobalRotation::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GlobalRotation>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GlobalRotation::GetItemDebugString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GlobalRotation>::get(), "GetItemDebugString",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "rotationKey", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "rotationItems", ty:
// "::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<::GlobalNamespace::RotationItem,::Array<::GlobalNamespace::RotationItem>*>>*", modifiers: "", def_value: Some("nullptr") }, CppParam
// { name: "startTime", ty: "::System::DateTime", modifiers: "", def_value: Some("{}") }, CppParam { name: "expireTime", ty: "::System::Nullable_1<::System::DateTime>", modifiers: "", def_value:
// Some("{}") }]
constexpr ::GlobalNamespace::GlobalRotation::GlobalRotation(
    ::StringW rotationKey, ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::GlobalNamespace::RotationItem, ::Array<::GlobalNamespace::RotationItem>*>>* rotationItems,
    ::System::DateTime startTime, ::System::Nullable_1<::System::DateTime> expireTime) noexcept {
  this->rotationKey = rotationKey;
  this->rotationItems = rotationItems;
  this->startTime = startTime;
  this->expireTime = expireTime;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GlobalRotation::GlobalRotation() {}
