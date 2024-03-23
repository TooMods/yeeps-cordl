#pragma once
#include "GlobalNamespace/zzzz__MapObjectSyncDataCompressed_def.hpp"
#include "GlobalNamespace/zzzz__MapObjectSyncData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MapObjectSyncDataCompressed._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::MapObjectSyncDataCompressed::*)(::GlobalNamespace::MapObjectSyncData, int32_t, int32_t, int32_t)>(&::GlobalNamespace::MapObjectSyncDataCompressed::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x307a5b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectSyncDataCompressed>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MapObjectSyncData>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MapObjectSyncDataCompressed._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::MapObjectSyncDataCompressed::*)(int16_t, int16_t, int16_t, int16_t, uint8_t, uint8_t, int16_t)>(&::GlobalNamespace::MapObjectSyncDataCompressed::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x307a5e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectSyncDataCompressed>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MapObjectSyncDataCompressed.AppendBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MapObjectSyncDataCompressed::*)(::System::Collections::Generic::List_1<uint8_t>*)>(
    &::GlobalNamespace::MapObjectSyncDataCompressed::AppendBytes)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x307a604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectSyncDataCompressed>::get(), "AppendBytes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<uint8_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MapObjectSyncDataCompressed.ConvertFromByteStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MapObjectSyncDataCompressed (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::GlobalNamespace::MapObjectSyncDataCompressed::ConvertFromByteStream)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x307aa94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectSyncDataCompressed>::get(), "ConvertFromByteStream", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MapObjectSyncDataCompressed::_ctor(::GlobalNamespace::MapObjectSyncData originalData, int32_t keyIndex, int32_t colorKeyIndex, int32_t ownerUserIDIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectSyncDataCompressed>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MapObjectSyncData>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, originalData, keyIndex, colorKeyIndex, ownerUserIDIndex);
}
inline void GlobalNamespace::MapObjectSyncDataCompressed::_ctor(int16_t keyIndex, int16_t positionX, int16_t positionY, int16_t positionZ, uint8_t placedDirectionData, uint8_t colorKeyIndex,
                                                                int16_t ownerUserIDIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectSyncDataCompressed>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyIndex, positionX, positionY, positionZ, placedDirectionData, colorKeyIndex, ownerUserIDIndex);
}
inline void GlobalNamespace::MapObjectSyncDataCompressed::AppendBytes(::System::Collections::Generic::List_1<uint8_t>* bytes) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectSyncDataCompressed>::get(), "AppendBytes", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<uint8_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bytes);
}
inline ::GlobalNamespace::MapObjectSyncDataCompressed GlobalNamespace::MapObjectSyncDataCompressed::ConvertFromByteStream(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t startIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectSyncDataCompressed>::get(), "ConvertFromByteStream", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MapObjectSyncDataCompressed, false>(nullptr, ___internal_method, bytes, startIndex);
}
// Ctor Parameters [CppParam { name: "keyIndex", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "positionX", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "positionY", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "positionZ", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "placedDirectionData", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "colorKeyIndex", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "ownerUserIDIndex", ty: "int16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MapObjectSyncDataCompressed::MapObjectSyncDataCompressed(int16_t keyIndex, int16_t positionX, int16_t positionY, int16_t positionZ, uint8_t placedDirectionData,
                                                                                      uint8_t colorKeyIndex, int16_t ownerUserIDIndex) noexcept {
  this->keyIndex = keyIndex;
  this->positionX = positionX;
  this->positionY = positionY;
  this->positionZ = positionZ;
  this->placedDirectionData = placedDirectionData;
  this->colorKeyIndex = colorKeyIndex;
  this->ownerUserIDIndex = ownerUserIDIndex;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MapObjectSyncDataCompressed::MapObjectSyncDataCompressed() {}
