#pragma once
#include "Newtonsoft/Json/zzzz__JsonConverter_impl.hpp"
#include "Unity/Services/Vivox/Mint/Http/zzzz__JsonObjectCollectionConverter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::JsonObjectCollectionConverter.WriteJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Mint::Http::JsonObjectCollectionConverter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*)>(&::Unity::Services::Vivox::Mint::Http::JsonObjectCollectionConverter::WriteJson)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x1705c30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::JsonObjectCollectionConverter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::JsonObjectCollectionConverter*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::JsonObjectCollectionConverter.ReadJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::Unity::Services::Vivox::Mint::Http::JsonObjectCollectionConverter::*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*)>(
    &::Unity::Services::Vivox::Mint::Http::JsonObjectCollectionConverter::ReadJson)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x1705e94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::JsonObjectCollectionConverter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::JsonObjectCollectionConverter*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::JsonObjectCollectionConverter.CanConvert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Vivox::Mint::Http::JsonObjectCollectionConverter::*)(::System::Type*)>(
    &::Unity::Services::Vivox::Mint::Http::JsonObjectCollectionConverter::CanConvert)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1706164;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::JsonObjectCollectionConverter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::JsonObjectCollectionConverter*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::JsonObjectCollectionConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Mint::Http::JsonObjectCollectionConverter::*)()>(
    &::Unity::Services::Vivox::Mint::Http::JsonObjectCollectionConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17061a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::JsonObjectCollectionConverter*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Services::Vivox::Mint::Http::JsonObjectCollectionConverter::WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value,
                                                                                         ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::JsonObjectCollectionConverter*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, value, serializer);
}
inline ::System::Object* Unity::Services::Vivox::Mint::Http::JsonObjectCollectionConverter::ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType,
                                                                                                     ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::JsonObjectCollectionConverter*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, reader, objectType, existingValue, serializer);
}
inline bool Unity::Services::Vivox::Mint::Http::JsonObjectCollectionConverter::CanConvert(::System::Type* objectType) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::JsonObjectCollectionConverter*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, objectType);
}
inline ::Unity::Services::Vivox::Mint::Http::JsonObjectCollectionConverter* Unity::Services::Vivox::Mint::Http::JsonObjectCollectionConverter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::Mint::Http::JsonObjectCollectionConverter*>());
}
inline void Unity::Services::Vivox::Mint::Http::JsonObjectCollectionConverter::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::JsonObjectCollectionConverter*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::Mint::Http::JsonObjectCollectionConverter::JsonObjectCollectionConverter() {}
