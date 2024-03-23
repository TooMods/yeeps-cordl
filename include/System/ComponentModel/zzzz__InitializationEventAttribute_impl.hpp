#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__InitializationEventAttribute_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::InitializationEventAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::InitializationEventAttribute::*)(::StringW)>(
    &::System::ComponentModel::InitializationEventAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1ae8498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::InitializationEventAttribute*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::InitializationEventAttribute.get_EventName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ComponentModel::InitializationEventAttribute::*)()>(
    &::System::ComponentModel::InitializationEventAttribute::get_EventName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1ae84c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::InitializationEventAttribute*>::get(),
                                                                               "get_EventName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& System::ComponentModel::InitializationEventAttribute::__cordl_internal_get__EventName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EventName_k__BackingField;
}
constexpr ::StringW const& System::ComponentModel::InitializationEventAttribute::__cordl_internal_get__EventName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EventName_k__BackingField;
}
constexpr void System::ComponentModel::InitializationEventAttribute::__cordl_internal_set__EventName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____EventName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::ComponentModel::InitializationEventAttribute* System::ComponentModel::InitializationEventAttribute::New_ctor(::StringW eventName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::InitializationEventAttribute*>(eventName));
}
inline void System::ComponentModel::InitializationEventAttribute::_ctor(::StringW eventName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::InitializationEventAttribute*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventName);
}
inline ::StringW System::ComponentModel::InitializationEventAttribute::get_EventName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::InitializationEventAttribute*>::get(),
                                                                             "get_EventName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::InitializationEventAttribute::InitializationEventAttribute() {}
