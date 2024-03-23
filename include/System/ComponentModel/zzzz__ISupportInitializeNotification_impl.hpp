#pragma once
#include "System/ComponentModel/zzzz__ISupportInitializeNotification_def.hpp"
#include "System/ComponentModel/zzzz__ISupportInitialize_def.hpp"
#include "System/zzzz__EventHandler_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ISupportInitializeNotification.get_IsInitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::ISupportInitializeNotification::*)()>(
    &::System::ComponentModel::ISupportInitializeNotification::get_IsInitialized)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ISupportInitializeNotification*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ISupportInitializeNotification*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ISupportInitializeNotification.add_Initialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::ISupportInitializeNotification::*)(::System::EventHandler*)>(
    &::System::ComponentModel::ISupportInitializeNotification::add_Initialized)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ISupportInitializeNotification*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ISupportInitializeNotification*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ISupportInitializeNotification.remove_Initialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::ISupportInitializeNotification::*)(::System::EventHandler*)>(
    &::System::ComponentModel::ISupportInitializeNotification::remove_Initialized)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ISupportInitializeNotification*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ISupportInitializeNotification*>::get(), 2));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::ComponentModel::ISupportInitialize"
constexpr System::ComponentModel::ISupportInitializeNotification::operator ::System::ComponentModel::ISupportInitialize*() noexcept {
  return static_cast<::System::ComponentModel::ISupportInitialize*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::ISupportInitialize"
constexpr ::System::ComponentModel::ISupportInitialize* System::ComponentModel::ISupportInitializeNotification::i___System__ComponentModel__ISupportInitialize() noexcept {
  return static_cast<::System::ComponentModel::ISupportInitialize*>(static_cast<void*>(this));
}
inline bool System::ComponentModel::ISupportInitializeNotification::get_IsInitialized() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ISupportInitializeNotification*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::ComponentModel::ISupportInitializeNotification::add_Initialized(::System::EventHandler* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ISupportInitializeNotification*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::ComponentModel::ISupportInitializeNotification::remove_Initialized(::System::EventHandler* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ISupportInitializeNotification*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
