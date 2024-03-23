#pragma once
#include "Unity/Services/Authentication/Internal/zzzz__IPlayerId_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_def.hpp"
//  Writing Method size for method: ::Unity::Services::Authentication::Internal::IPlayerId.get_PlayerId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Authentication::Internal::IPlayerId::*)()>(
    &::Unity::Services::Authentication::Internal::IPlayerId::get_PlayerId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::Internal::IPlayerId*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::Internal::IPlayerId*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::Internal::IPlayerId.add_PlayerIdChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::Internal::IPlayerId::*)(::System::Action_1<::StringW>*)>(
    &::Unity::Services::Authentication::Internal::IPlayerId::add_PlayerIdChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::Internal::IPlayerId*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::Internal::IPlayerId*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::Internal::IPlayerId.remove_PlayerIdChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::Internal::IPlayerId::*)(::System::Action_1<::StringW>*)>(
    &::Unity::Services::Authentication::Internal::IPlayerId::remove_PlayerIdChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::Internal::IPlayerId*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::Internal::IPlayerId*>::get(), 2));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr Unity::Services::Authentication::Internal::IPlayerId::operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept {
  return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent* Unity::Services::Authentication::Internal::IPlayerId::i___Unity__Services__Core__Internal__IServiceComponent() noexcept {
  return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
inline ::StringW Unity::Services::Authentication::Internal::IPlayerId::get_PlayerId() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::Internal::IPlayerId*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Unity::Services::Authentication::Internal::IPlayerId::add_PlayerIdChanged(::System::Action_1<::StringW>* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::Internal::IPlayerId*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::Authentication::Internal::IPlayerId::remove_PlayerIdChanged(::System::Action_1<::StringW>* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::Internal::IPlayerId*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
