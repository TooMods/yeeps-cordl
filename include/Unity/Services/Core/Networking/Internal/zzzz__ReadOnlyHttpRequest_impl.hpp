#pragma once
#include "Unity/Services/Core/Networking/Internal/zzzz__ReadOnlyHttpRequest_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "Unity/Services/Core/Networking/Internal/zzzz__HttpRequest_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest::*)(
    ::Unity::Services::Core::Networking::Internal::HttpRequest*)>(&::Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2669414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Networking::Internal::HttpRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest.get_Method
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest::*)()>(
    &::Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest::get_Method)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x266941c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest>::get(), "get_Method",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest.get_Url
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest::*)()>(
    &::Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest::get_Url)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2669438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest>::get(), "get_Url",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest.get_Headers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::StringW>* (
    ::Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest::*)()>(&::Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest::get_Headers)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2669454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest>::get(), "get_Headers",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest.get_Body
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest::*)()>(
    &::Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest::get_Body)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2669470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest>::get(), "get_Body",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest::_ctor(::Unity::Services::Core::Networking::Internal::HttpRequest* request) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Networking::Internal::HttpRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request);
}
inline ::StringW Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest::get_Method() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest>::get(), "get_Method",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest::get_Url() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest>::get(), "get_Url",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::StringW>* Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest::get_Headers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest>::get(), "get_Headers",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::StringW>*, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest::get_Body() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest>::get(), "get_Body",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Request", ty: "::Unity::Services::Core::Networking::Internal::HttpRequest*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest::ReadOnlyHttpRequest(::Unity::Services::Core::Networking::Internal::HttpRequest* m_Request) noexcept {
  this->m_Request = m_Request;
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Networking::Internal::ReadOnlyHttpRequest::ReadOnlyHttpRequest() {}
