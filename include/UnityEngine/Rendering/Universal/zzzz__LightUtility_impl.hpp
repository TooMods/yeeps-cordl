#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightUtility_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__ContourVertex_def.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__ElementType_def.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__Tess_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IntPoint_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Light2D_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightUtility_def.hpp"
#include "UnityEngine/Rendering/zzzz__VertexAttributeDescriptor_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::__LightUtility__PivotType::__LightUtility__PivotType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__LightUtility__PivotType::__LightUtility__PivotType() {}
constexpr ::UnityEngine::Rendering::Universal::__LightUtility__PivotType UnityEngine::Rendering::Universal::__LightUtility__PivotType::PivotBase{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::__LightUtility__PivotType UnityEngine::Rendering::Universal::__LightUtility__PivotType::PivotCurve{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::__LightUtility__PivotType UnityEngine::Rendering::Universal::__LightUtility__PivotType::PivotIntersect{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Universal::__LightUtility__PivotType UnityEngine::Rendering::Universal::__LightUtility__PivotType::PivotSkip{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Rendering::Universal::__LightUtility__PivotType UnityEngine::Rendering::Universal::__LightUtility__PivotType::PivotClip{ static_cast<int32_t>(0x4) };
inline void UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex::setStaticF_VertexLayout(
    ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor, ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor, ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*>, "VertexLayout",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex>::get>(
      std::forward<::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor, ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*>>(value));
}
inline ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor, ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*>
UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex::getStaticF_VertexLayout() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor, ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*>, "VertexLayout",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex>::get>();
}
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "uv", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex::__LightUtility__LightMeshVertex(::UnityEngine::Vector3 position, ::UnityEngine::Color color,
                                                                                                                ::UnityEngine::Vector2 uv) noexcept {
  this->position = position;
  this->color = color;
  this->uv = uv;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex::__LightUtility__LightMeshVertex() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__LightUtility____c__DisplayClass6_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::__LightUtility____c__DisplayClass6_0::*)()>(
    &::UnityEngine::Rendering::Universal::__LightUtility____c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f36a60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__LightUtility____c__DisplayClass6_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__LightUtility____c__DisplayClass6_0._Tessellate_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex (
    ::UnityEngine::Rendering::Universal::__LightUtility____c__DisplayClass6_0::*)(::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex)>(
    &::UnityEngine::Rendering::Universal::__LightUtility____c__DisplayClass6_0::_Tessellate_b__1)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2f37b40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__LightUtility____c__DisplayClass6_0*>::get(), "<Tessellate>b__1",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& UnityEngine::Rendering::Universal::__LightUtility____c__DisplayClass6_0::__cordl_internal_get_c() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr ::UnityEngine::Color const& UnityEngine::Rendering::Universal::__LightUtility____c__DisplayClass6_0::__cordl_internal_get_c() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr void UnityEngine::Rendering::Universal::__LightUtility____c__DisplayClass6_0::__cordl_internal_set_c(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___c = value;
}
inline ::UnityEngine::Rendering::Universal::__LightUtility____c__DisplayClass6_0* UnityEngine::Rendering::Universal::__LightUtility____c__DisplayClass6_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::__LightUtility____c__DisplayClass6_0*>());
}
inline void UnityEngine::Rendering::Universal::__LightUtility____c__DisplayClass6_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__LightUtility____c__DisplayClass6_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex
UnityEngine::Rendering::Universal::__LightUtility____c__DisplayClass6_0::_Tessellate_b__1(::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex v) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__LightUtility____c__DisplayClass6_0*>::get(), "<Tessellate>b__1",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex, false>(this, ___internal_method, v);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__LightUtility____c__DisplayClass6_0::__LightUtility____c__DisplayClass6_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__LightUtility____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::__LightUtility____c::*)()>(
    &::UnityEngine::Rendering::Universal::__LightUtility____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f37be4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__LightUtility____c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__LightUtility____c._Tessellate_b__6_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::__LightUtility____c::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::__LightUtility____c::_Tessellate_b__6_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f37bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__LightUtility____c*>::get(), "<Tessellate>b__6_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::__LightUtility____c::setStaticF___9(::UnityEngine::Rendering::Universal::__LightUtility____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::__LightUtility____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__LightUtility____c*>::get>(
      std::forward<::UnityEngine::Rendering::Universal::__LightUtility____c*>(value));
}
inline ::UnityEngine::Rendering::Universal::__LightUtility____c* UnityEngine::Rendering::Universal::__LightUtility____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::__LightUtility____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__LightUtility____c*>::get>();
}
inline void UnityEngine::Rendering::Universal::__LightUtility____c::setStaticF___9__6_0(::System::Func_2<int32_t, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<int32_t, int32_t>*, "<>9__6_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__LightUtility____c*>::get>(
      std::forward<::System::Func_2<int32_t, int32_t>*>(value));
}
inline ::System::Func_2<int32_t, int32_t>* UnityEngine::Rendering::Universal::__LightUtility____c::getStaticF___9__6_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<int32_t, int32_t>*, "<>9__6_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__LightUtility____c*>::get>();
}
inline ::UnityEngine::Rendering::Universal::__LightUtility____c* UnityEngine::Rendering::Universal::__LightUtility____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::__LightUtility____c*>());
}
inline void UnityEngine::Rendering::Universal::__LightUtility____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__LightUtility____c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::__LightUtility____c::_Tessellate_b__6_0(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__LightUtility____c*>::get(), "<Tessellate>b__6_0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, i);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__LightUtility____c::__LightUtility____c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightUtility.CheckForChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::UnityEngine::Rendering::Universal::__Light2D__LightType, ByRef<::UnityEngine::Rendering::Universal::__Light2D__LightType>)>(&::UnityEngine::Rendering::Universal::LightUtility::CheckForChange)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2f33874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightUtility*>::get(), "CheckForChange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::__Light2D__LightType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::__Light2D__LightType>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightUtility.CheckForChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t, ByRef<int32_t>)>(&::UnityEngine::Rendering::Universal::LightUtility::CheckForChange)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2f3385c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightUtility*>::get(), "CheckForChange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightUtility.CheckForChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float_t, ByRef<float_t>)>(&::UnityEngine::Rendering::Universal::LightUtility::CheckForChange)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2f33844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightUtility*>::get(), "CheckForChange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightUtility.CheckForChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool, ByRef<bool>)>(&::UnityEngine::Rendering::Universal::LightUtility::CheckForChange)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2f362c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightUtility*>::get(), "CheckForChange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightUtility.Tessellate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*, ::UnityEngine::Rendering::Universal::LibTessDotNet::ElementType, ::Unity::Collections::NativeArray_1<uint16_t>,
                         ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex>, ::UnityEngine::Color, ByRef<int32_t>, ByRef<int32_t>)>(
        &::UnityEngine::Rendering::Universal::LightUtility::Tessellate)> {
  constexpr static std::size_t size = 0x788;
  constexpr static std::size_t addrs = 0x2f362d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightUtility*>::get(), "Tessellate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::ElementType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint16_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightUtility.TestPivot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*, int32_t, int64_t)>(
    &::UnityEngine::Rendering::Universal::LightUtility::TestPivot)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2f36a68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightUtility*>::get(), "TestPivot", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightUtility.DegeneratePivots
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* (*)(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*,
                                                                                                           ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*)>(
        &::UnityEngine::Rendering::Universal::LightUtility::DegeneratePivots)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x2f36b3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightUtility*>::get(), "DegeneratePivots", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightUtility.SortPivots
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* (*)(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*,
                                                                                                           ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*)>(
        &::UnityEngine::Rendering::Universal::LightUtility::SortPivots)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x2f36f18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightUtility*>::get(), "SortPivots", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightUtility.FixPivots
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* (*)(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*,
                                                                                                           ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*)>(
        &::UnityEngine::Rendering::Universal::LightUtility::FixPivots)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x2f37130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightUtility*>::get(), "FixPivots", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightUtility.GetOutlinePath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::UnityEngine::Vector2>* (*)(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, float_t)>(
        &::UnityEngine::Rendering::Universal::LightUtility::GetOutlinePath)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x2f37430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightUtility*>::get(), "GetOutlinePath", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightUtility.TransferToMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex>, int32_t, ::Unity::Collections::NativeArray_1<uint16_t>, int32_t,
                         ::UnityEngine::Rendering::Universal::Light2D*)>(&::UnityEngine::Rendering::Universal::LightUtility::TransferToMesh)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x2f37840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightUtility*>::get(), "TransferToMesh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint16_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightUtility.GenerateShapeMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Bounds (*)(::UnityEngine::Rendering::Universal::Light2D*, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, float_t)>(
        &::UnityEngine::Rendering::Universal::LightUtility::GenerateShapeMesh)> {
  constexpr static std::size_t size = 0xa0c;
  constexpr static std::size_t addrs = 0x2f3388c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightUtility*>::get(), "GenerateShapeMesh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightUtility.GenerateParametricMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (*)(::UnityEngine::Rendering::Universal::Light2D*, float_t, float_t, float_t, int32_t)>(
    &::UnityEngine::Rendering::Universal::LightUtility::GenerateParametricMesh)> {
  constexpr static std::size_t size = 0x7bc;
  constexpr static std::size_t addrs = 0x2f34298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightUtility*>::get(), "GenerateParametricMesh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightUtility.GenerateSpriteMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (*)(::UnityEngine::Rendering::Universal::Light2D*, ::UnityEngine::Sprite*)>(
    &::UnityEngine::Rendering::Universal::LightUtility::GenerateSpriteMesh)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x2f332d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightUtility*>::get(), "GenerateSpriteMesh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightUtility.GetShapePathHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>)>(
    &::UnityEngine::Rendering::Universal::LightUtility::GetShapePathHash)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2f33758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightUtility*>::get(), "GetShapePathHash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get() })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::Universal::LightUtility::CheckForChange(::UnityEngine::Rendering::Universal::__Light2D__LightType a,
                                                                            ByRef<::UnityEngine::Rendering::Universal::__Light2D__LightType> b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightUtility*>::get(), "CheckForChange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::__Light2D__LightType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::__Light2D__LightType>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::Rendering::Universal::LightUtility::CheckForChange(int32_t a, ByRef<int32_t> b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightUtility*>::get(), "CheckForChange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::Rendering::Universal::LightUtility::CheckForChange(float_t a, ByRef<float_t> b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightUtility*>::get(), "CheckForChange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::Rendering::Universal::LightUtility::CheckForChange(bool a, ByRef<bool> b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightUtility*>::get(), "CheckForChange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline void UnityEngine::Rendering::Universal::LightUtility::Tessellate(::UnityEngine::Rendering::Universal::LibTessDotNet::Tess* tess,
                                                                        ::UnityEngine::Rendering::Universal::LibTessDotNet::ElementType boundaryType,
                                                                        ::Unity::Collections::NativeArray_1<uint16_t> indices,
                                                                        ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex> vertices,
                                                                        ::UnityEngine::Color c, ByRef<int32_t> VCount, ByRef<int32_t> ICount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightUtility*>::get(), "Tessellate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::ElementType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint16_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, tess, boundaryType, indices, vertices, c, VCount, ICount);
}
inline bool UnityEngine::Rendering::Universal::LightUtility::TestPivot(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* path, int32_t activePoint,
                                                                       int64_t lastPoint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightUtility*>::get(), "TestPivot", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, path, activePoint, lastPoint);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*
UnityEngine::Rendering::Universal::LightUtility::DegeneratePivots(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* path,
                                                                  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* inPath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightUtility*>::get(), "DegeneratePivots", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*, false>(nullptr, ___internal_method, path, inPath);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*
UnityEngine::Rendering::Universal::LightUtility::SortPivots(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* outPath,
                                                            ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* inPath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightUtility*>::get(), "SortPivots", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*, false>(nullptr, ___internal_method, outPath, inPath);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*
UnityEngine::Rendering::Universal::LightUtility::FixPivots(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* outPath,
                                                           ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* inPath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightUtility*>::get(), "FixPivots", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*, false>(nullptr, ___internal_method, outPath, inPath);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*
UnityEngine::Rendering::Universal::LightUtility::GetOutlinePath(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> shapePath, float_t offsetDistance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightUtility*>::get(), "GetOutlinePath", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, false>(nullptr, ___internal_method, shapePath, offsetDistance);
}
inline void UnityEngine::Rendering::Universal::LightUtility::TransferToMesh(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex> vertices,
                                                                            int32_t vertexCount, ::Unity::Collections::NativeArray_1<uint16_t> indices, int32_t indexCount,
                                                                            ::UnityEngine::Rendering::Universal::Light2D* light) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightUtility*>::get(), "TransferToMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<uint16_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, vertices, vertexCount, indices, indexCount, light);
}
inline ::UnityEngine::Bounds UnityEngine::Rendering::Universal::LightUtility::GenerateShapeMesh(::UnityEngine::Rendering::Universal::Light2D* light,
                                                                                                ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> shapePath, float_t falloffDistance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightUtility*>::get(), "GenerateShapeMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds, false>(nullptr, ___internal_method, light, shapePath, falloffDistance);
}
inline ::UnityEngine::Bounds UnityEngine::Rendering::Universal::LightUtility::GenerateParametricMesh(::UnityEngine::Rendering::Universal::Light2D* light, float_t radius, float_t falloffDistance,
                                                                                                     float_t angle, int32_t sides) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightUtility*>::get(), "GenerateParametricMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds, false>(nullptr, ___internal_method, light, radius, falloffDistance, angle, sides);
}
inline ::UnityEngine::Bounds UnityEngine::Rendering::Universal::LightUtility::GenerateSpriteMesh(::UnityEngine::Rendering::Universal::Light2D* light, ::UnityEngine::Sprite* sprite) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightUtility*>::get(), "GenerateSpriteMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds, false>(nullptr, ___internal_method, light, sprite);
}
inline int32_t UnityEngine::Rendering::Universal::LightUtility::GetShapePathHash(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> path) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightUtility*>::get(), "GetShapePathHash", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, path);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::LightUtility::LightUtility() {}
