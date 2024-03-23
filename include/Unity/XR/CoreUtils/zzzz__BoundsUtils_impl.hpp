#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__BoundsUtils_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::BoundsUtils.GetBounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*)>(
    &::Unity::XR::CoreUtils::BoundsUtils::GetBounds)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x28728a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::BoundsUtils*>::get(), "GetBounds", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::BoundsUtils.GetBounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (*)(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>)>(
    &::Unity::XR::CoreUtils::BoundsUtils::GetBounds)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x2872ec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::BoundsUtils*>::get(), "GetBounds", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::BoundsUtils.GetBounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (*)(::UnityEngine::Transform*)>(&::Unity::XR::CoreUtils::BoundsUtils::GetBounds)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x2872b70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::BoundsUtils*>::get(), "GetBounds", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::BoundsUtils.GetBounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*)>(
    &::Unity::XR::CoreUtils::BoundsUtils::GetBounds)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x287305c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::BoundsUtils*>::get(), "GetBounds", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::BoundsUtils.GetBounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(
    &::Unity::XR::CoreUtils::BoundsUtils::GetBounds)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2873374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::BoundsUtils*>::get(), "GetBounds", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get() })));
    return ___internal_method;
  }
};
inline void Unity::XR::CoreUtils::BoundsUtils::setStaticF_k_Renderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*, "k_Renderers",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::BoundsUtils*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* Unity::XR::CoreUtils::BoundsUtils::getStaticF_k_Renderers() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*, "k_Renderers",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::BoundsUtils*>::get>();
}
inline void Unity::XR::CoreUtils::BoundsUtils::setStaticF_k_Transforms(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*, "k_Transforms",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::BoundsUtils*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* Unity::XR::CoreUtils::BoundsUtils::getStaticF_k_Transforms() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*, "k_Transforms",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::BoundsUtils*>::get>();
}
inline ::UnityEngine::Bounds Unity::XR::CoreUtils::BoundsUtils::GetBounds(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* gameObjects) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::BoundsUtils*>::get(), "GetBounds", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds, false>(nullptr, ___internal_method, gameObjects);
}
inline ::UnityEngine::Bounds Unity::XR::CoreUtils::BoundsUtils::GetBounds(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> transforms) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::BoundsUtils*>::get(), "GetBounds", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds, false>(nullptr, ___internal_method, transforms);
}
inline ::UnityEngine::Bounds Unity::XR::CoreUtils::BoundsUtils::GetBounds(::UnityEngine::Transform* transform) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::BoundsUtils*>::get(), "GetBounds", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds, false>(nullptr, ___internal_method, transform);
}
inline ::UnityEngine::Bounds Unity::XR::CoreUtils::BoundsUtils::GetBounds(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* renderers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::BoundsUtils*>::get(), "GetBounds", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds, false>(nullptr, ___internal_method, renderers);
}
template <typename T> inline ::UnityEngine::Bounds Unity::XR::CoreUtils::BoundsUtils::GetBounds(::System::Collections::Generic::List_1<T>* colliders) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::BoundsUtils*>::get(), "GetBounds",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds, false>(nullptr, ___internal_method, colliders);
}
inline ::UnityEngine::Bounds Unity::XR::CoreUtils::BoundsUtils::GetBounds(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* points) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::BoundsUtils*>::get(), "GetBounds", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds, false>(nullptr, ___internal_method, points);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::BoundsUtils::BoundsUtils() {}
