#pragma once
#include "UnityEngine/Rendering/zzzz__DrawRendererFlags_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DrawingSettings_impl.hpp"
#include "UnityEngine/Rendering/zzzz__PerObjectData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SortingSettings_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DrawingSettings_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawRendererFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawingSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__PerObjectData_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include "UnityEngine/Rendering/zzzz__SortingSettings_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::__DrawingSettings___shaderPassNames_e__FixedBuffer::__DrawingSettings___shaderPassNames_e__FixedBuffer(int32_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::__DrawingSettings___shaderPassNames_e__FixedBuffer::__DrawingSettings___shaderPassNames_e__FixedBuffer() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DrawingSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::DrawingSettings::*)(
    ::UnityEngine::Rendering::ShaderTagId, ::UnityEngine::Rendering::SortingSettings)>(&::UnityEngine::Rendering::DrawingSettings::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x29db6f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawingSettings>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ShaderTagId>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SortingSettings>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DrawingSettings.get_sortingSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::SortingSettings (::UnityEngine::Rendering::DrawingSettings::*)()>(
    &::UnityEngine::Rendering::DrawingSettings::get_sortingSettings)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x29db7d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawingSettings>::get(),
                                                                               "get_sortingSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DrawingSettings.set_sortingSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::DrawingSettings::*)(::UnityEngine::Rendering::SortingSettings)>(
    &::UnityEngine::Rendering::DrawingSettings::set_sortingSettings)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x29db7ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawingSettings>::get(), "set_sortingSettings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SortingSettings>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DrawingSettings.set_perObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::DrawingSettings::*)(::UnityEngine::Rendering::PerObjectData)>(
    &::UnityEngine::Rendering::DrawingSettings::set_perObjectData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29db800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawingSettings>::get(), "set_perObjectData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::PerObjectData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DrawingSettings.set_enableDynamicBatching
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::DrawingSettings::*)(bool)>(
    &::UnityEngine::Rendering::DrawingSettings::set_enableDynamicBatching)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x29db808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawingSettings>::get(), "set_enableDynamicBatching",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DrawingSettings.set_enableInstancing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::DrawingSettings::*)(bool)>(
    &::UnityEngine::Rendering::DrawingSettings::set_enableInstancing)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x29db824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawingSettings>::get(), "set_enableInstancing",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DrawingSettings.set_overrideMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::DrawingSettings::*)(::UnityEngine::Material*)>(
    &::UnityEngine::Rendering::DrawingSettings::set_overrideMaterial)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x29db840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawingSettings>::get(), "set_overrideMaterial", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DrawingSettings.set_overrideMaterialPassIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::DrawingSettings::*)(int32_t)>(
    &::UnityEngine::Rendering::DrawingSettings::set_overrideMaterialPassIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29db86c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawingSettings>::get(), "set_overrideMaterialPassIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DrawingSettings.set_fallbackMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::DrawingSettings::*)(::UnityEngine::Material*)>(
    &::UnityEngine::Rendering::DrawingSettings::set_fallbackMaterial)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x29db874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawingSettings>::get(), "set_fallbackMaterial", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DrawingSettings.set_mainLightIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::DrawingSettings::*)(int32_t)>(
    &::UnityEngine::Rendering::DrawingSettings::set_mainLightIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29db8a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawingSettings>::get(), "set_mainLightIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DrawingSettings.GetShaderPassName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ShaderTagId (::UnityEngine::Rendering::DrawingSettings::*)(int32_t)>(
    &::UnityEngine::Rendering::DrawingSettings::GetShaderPassName)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x29db8a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawingSettings>::get(), "GetShaderPassName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DrawingSettings.SetShaderPassName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::DrawingSettings::*)(int32_t, ::UnityEngine::Rendering::ShaderTagId)>(
    &::UnityEngine::Rendering::DrawingSettings::SetShaderPassName)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x29dba10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawingSettings>::get(), "SetShaderPassName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ShaderTagId>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DrawingSettings.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::DrawingSettings::*)(::UnityEngine::Rendering::DrawingSettings)>(
    &::UnityEngine::Rendering::DrawingSettings::Equals)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x29dbb70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawingSettings>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DrawingSettings>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DrawingSettings.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::DrawingSettings::*)(::System::Object*)>(
    &::UnityEngine::Rendering::DrawingSettings::Equals)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x29dbcb4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawingSettings>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawingSettings>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DrawingSettings.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::DrawingSettings::*)()>(&::UnityEngine::Rendering::DrawingSettings::GetHashCode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x29dbd6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawingSettings>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawingSettings>::get(), 2));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::DrawingSettings>"
constexpr UnityEngine::Rendering::DrawingSettings::operator ::System::IEquatable_1<::UnityEngine::Rendering::DrawingSettings>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::DrawingSettings>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::DrawingSettings>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::DrawingSettings>* UnityEngine::Rendering::DrawingSettings::i___System__IEquatable_1___UnityEngine__Rendering__DrawingSettings_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::DrawingSettings>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void UnityEngine::Rendering::DrawingSettings::setStaticF_maxShaderPasses(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "maxShaderPasses", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawingSettings>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::DrawingSettings::getStaticF_maxShaderPasses() {
  return ::cordl_internals::getStaticField<int32_t, "maxShaderPasses", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawingSettings>::get>();
}
inline void UnityEngine::Rendering::DrawingSettings::_ctor(::UnityEngine::Rendering::ShaderTagId shaderPassName, ::UnityEngine::Rendering::SortingSettings sortingSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawingSettings>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ShaderTagId>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SortingSettings>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shaderPassName, sortingSettings);
}
inline ::UnityEngine::Rendering::SortingSettings UnityEngine::Rendering::DrawingSettings::get_sortingSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawingSettings>::get(),
                                                                             "get_sortingSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::SortingSettings, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DrawingSettings::set_sortingSettings(::UnityEngine::Rendering::SortingSettings value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawingSettings>::get(), "set_sortingSettings", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SortingSettings>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DrawingSettings::set_perObjectData(::UnityEngine::Rendering::PerObjectData value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawingSettings>::get(), "set_perObjectData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::PerObjectData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DrawingSettings::set_enableDynamicBatching(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawingSettings>::get(), "set_enableDynamicBatching",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DrawingSettings::set_enableInstancing(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawingSettings>::get(), "set_enableInstancing",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DrawingSettings::set_overrideMaterial(::UnityEngine::Material* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawingSettings>::get(), "set_overrideMaterial", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DrawingSettings::set_overrideMaterialPassIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawingSettings>::get(), "set_overrideMaterialPassIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DrawingSettings::set_fallbackMaterial(::UnityEngine::Material* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawingSettings>::get(), "set_fallbackMaterial", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DrawingSettings::set_mainLightIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawingSettings>::get(), "set_mainLightIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::ShaderTagId UnityEngine::Rendering::DrawingSettings::GetShaderPassName(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawingSettings>::get(), "GetShaderPassName",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ShaderTagId, false>(this, ___internal_method, index);
}
inline void UnityEngine::Rendering::DrawingSettings::SetShaderPassName(int32_t index, ::UnityEngine::Rendering::ShaderTagId shaderPassName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawingSettings>::get(), "SetShaderPassName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ShaderTagId>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, shaderPassName);
}
inline bool UnityEngine::Rendering::DrawingSettings::Equals(::UnityEngine::Rendering::DrawingSettings other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawingSettings>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DrawingSettings>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool UnityEngine::Rendering::DrawingSettings::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawingSettings>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t UnityEngine::Rendering::DrawingSettings::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawingSettings>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_SortingSettings", ty: "::UnityEngine::Rendering::SortingSettings", modifiers: "", def_value: Some("{}") }, CppParam { name: "shaderPassNames", ty:
// "::UnityEngine::Rendering::__DrawingSettings___shaderPassNames_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PerObjectData", ty:
// "::UnityEngine::Rendering::PerObjectData", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Flags", ty: "::UnityEngine::Rendering::DrawRendererFlags", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "m_OverrideMaterialInstanceId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OverrideMaterialPassIndex", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_fallbackMaterialInstanceId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MainLightIndex", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_UseSrpBatcher", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::DrawingSettings::DrawingSettings(::UnityEngine::Rendering::SortingSettings m_SortingSettings,
                                                                     ::UnityEngine::Rendering::__DrawingSettings___shaderPassNames_e__FixedBuffer shaderPassNames,
                                                                     ::UnityEngine::Rendering::PerObjectData m_PerObjectData, ::UnityEngine::Rendering::DrawRendererFlags m_Flags,
                                                                     int32_t m_OverrideMaterialInstanceId, int32_t m_OverrideMaterialPassIndex, int32_t m_fallbackMaterialInstanceId,
                                                                     int32_t m_MainLightIndex, int32_t m_UseSrpBatcher) noexcept {
  this->m_SortingSettings = m_SortingSettings;
  this->shaderPassNames = shaderPassNames;
  this->m_PerObjectData = m_PerObjectData;
  this->m_Flags = m_Flags;
  this->m_OverrideMaterialInstanceId = m_OverrideMaterialInstanceId;
  this->m_OverrideMaterialPassIndex = m_OverrideMaterialPassIndex;
  this->m_fallbackMaterialInstanceId = m_fallbackMaterialInstanceId;
  this->m_MainLightIndex = m_MainLightIndex;
  this->m_UseSrpBatcher = m_UseSrpBatcher;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DrawingSettings::DrawingSettings() {}
