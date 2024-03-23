#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Configuration/zzzz__ConfigurationCollectionHelper_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "Unity/Services/Core/Configuration/zzzz__ConfigurationEntry_def.hpp"
#include "Unity/Services/Core/Configuration/zzzz__SerializableProjectConfiguration_def.hpp"
#include "Unity/Services/Core/zzzz__InitializationOptions_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Configuration::ConfigurationCollectionHelper.FillWith
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Collections::Generic::IDictionary_2<::StringW, ::Unity::Services::Core::Configuration::ConfigurationEntry*>*, ::Unity::Services::Core::Configuration::SerializableProjectConfiguration)>(
    &::Unity::Services::Core::Configuration::ConfigurationCollectionHelper::FillWith)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x264a3ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::ConfigurationCollectionHelper*>::get(), "FillWith", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::Unity::Services::Core::Configuration::ConfigurationEntry*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Configuration::ConfigurationCollectionHelper.FillWith
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Collections::Generic::IDictionary_2<::StringW, ::Unity::Services::Core::Configuration::ConfigurationEntry*>*, ::Unity::Services::Core::InitializationOptions*)>(
        &::Unity::Services::Core::Configuration::ConfigurationCollectionHelper::FillWith)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x264a60c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::ConfigurationCollectionHelper*>::get(), "FillWith", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::Unity::Services::Core::Configuration::ConfigurationEntry*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::InitializationOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Configuration::ConfigurationCollectionHelper.SetOrCreateEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Collections::Generic::IDictionary_2<::StringW, ::Unity::Services::Core::Configuration::ConfigurationEntry*>*, ::StringW, ::Unity::Services::Core::Configuration::ConfigurationEntry*)>(
    &::Unity::Services::Core::Configuration::ConfigurationCollectionHelper::SetOrCreateEntry)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x264a47c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::ConfigurationCollectionHelper*>::get(), "SetOrCreateEntry",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::Unity::Services::Core::Configuration::ConfigurationEntry*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::ConfigurationEntry*>::get() })));
    return ___internal_method;
  }
};
inline void Unity::Services::Core::Configuration::ConfigurationCollectionHelper::FillWith(
    ::System::Collections::Generic::IDictionary_2<::StringW, ::Unity::Services::Core::Configuration::ConfigurationEntry*>* self,
    ::Unity::Services::Core::Configuration::SerializableProjectConfiguration config) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::ConfigurationCollectionHelper*>::get(), "FillWith", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::Unity::Services::Core::Configuration::ConfigurationEntry*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, self, config);
}
inline void Unity::Services::Core::Configuration::ConfigurationCollectionHelper::FillWith(
    ::System::Collections::Generic::IDictionary_2<::StringW, ::Unity::Services::Core::Configuration::ConfigurationEntry*>* self, ::Unity::Services::Core::InitializationOptions* options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::ConfigurationCollectionHelper*>::get(), "FillWith", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::Unity::Services::Core::Configuration::ConfigurationEntry*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::InitializationOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, self, options);
}
inline void Unity::Services::Core::Configuration::ConfigurationCollectionHelper::SetOrCreateEntry(
    ::System::Collections::Generic::IDictionary_2<::StringW, ::Unity::Services::Core::Configuration::ConfigurationEntry*>* self, ::StringW key,
    ::Unity::Services::Core::Configuration::ConfigurationEntry* entry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::ConfigurationCollectionHelper*>::get(), "SetOrCreateEntry",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::Unity::Services::Core::Configuration::ConfigurationEntry*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::ConfigurationEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, self, key, entry);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Configuration::ConfigurationCollectionHelper::ConfigurationCollectionHelper() {}
