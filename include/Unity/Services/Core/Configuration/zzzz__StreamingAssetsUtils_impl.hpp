#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Configuration/zzzz__StreamingAssetsUtils_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Configuration::StreamingAssetsUtils.GetFileTextFromStreamingAssetsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (*)(::StringW)>(
    &::Unity::Services::Core::Configuration::StreamingAssetsUtils::GetFileTextFromStreamingAssetsAsync)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x264b5e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::StreamingAssetsUtils*>::get(), "GetFileTextFromStreamingAssetsAsync",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::StringW>* Unity::Services::Core::Configuration::StreamingAssetsUtils::GetFileTextFromStreamingAssetsAsync(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::StreamingAssetsUtils*>::get(), "GetFileTextFromStreamingAssetsAsync",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(nullptr, ___internal_method, path);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Configuration::StreamingAssetsUtils::StreamingAssetsUtils() {}
