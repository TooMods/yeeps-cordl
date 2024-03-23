#pragma once
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeState_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumePerSceneData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeAsset_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumePerSceneData_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeState_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
// Ctor Parameters [CppParam { name: "state", ty: "::UnityEngine::Experimental::Rendering::ProbeVolumeState", modifiers: "", def_value: Some("{}") }, CppParam { name: "asset", ty:
// "::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::Experimental::Rendering::__ProbeVolumePerSceneData__SerializableAssetItem::__ProbeVolumePerSceneData__SerializableAssetItem(
    ::UnityEngine::Experimental::Rendering::ProbeVolumeState state, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset> asset) noexcept {
  this->state = state;
  this->asset = asset;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::__ProbeVolumePerSceneData__SerializableAssetItem::__ProbeVolumePerSceneData__SerializableAssetItem() {}
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData.OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x23c7a94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData*>::get(), "OnAfterDeserialize",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData.OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x23c7c58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData*>::get(), "OnBeforeSerialize",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData.StoreAssetForState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::*)(
    ::UnityEngine::Experimental::Rendering::ProbeVolumeState, ::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*)>(
    &::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::StoreAssetForState)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x23c7eb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData*>::get(), "StoreAssetForState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::ProbeVolumeState>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData.InvalidateAllAssets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::InvalidateAllAssets)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x23c7f1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData*>::get(), "InvalidateAllAssets",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData.GetCurrentStateAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset> (
    ::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::*)()>(&::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::GetCurrentStateAsset)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x23c8168;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData*>::get(),
                                                 "GetCurrentStateAsset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData.QueueAssetLoading
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::QueueAssetLoading)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x23c81f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData*>::get(), "QueueAssetLoading",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData.QueueAssetRemoval
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::QueueAssetRemoval)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x23c8354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData*>::get(), "QueueAssetRemoval",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23c84b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData*>::get(), "OnEnable",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23c84b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData*>::get(), "OnDisable",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23c84bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData*>::get(), "OnDestroy",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::Update)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x23c84c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData*>::get(), "Update",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::*)()>(
    &::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x23c8630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::ProbeVolumeState, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset>>*&
UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::__cordl_internal_get_assets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assets;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::ProbeVolumeState, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset>>*> const&
UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::__cordl_internal_get_assets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assets;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::__cordl_internal_set_assets(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::ProbeVolumeState, ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___assets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumePerSceneData__SerializableAssetItem>*&
UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::__cordl_internal_get_serializedAssets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializedAssets;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumePerSceneData__SerializableAssetItem>*> const&
UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::__cordl_internal_get_serializedAssets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializedAssets;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::__cordl_internal_set_serializedAssets(
    ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeVolumePerSceneData__SerializableAssetItem>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serializedAssets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeState& UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::__cordl_internal_get_m_CurrentState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentState;
}
constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeState const& UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::__cordl_internal_get_m_CurrentState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentState;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::__cordl_internal_set_m_CurrentState(::UnityEngine::Experimental::Rendering::ProbeVolumeState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentState = value;
}
constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeState& UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::__cordl_internal_get_m_PreviousState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousState;
}
constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeState const& UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::__cordl_internal_get_m_PreviousState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousState;
}
constexpr void UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::__cordl_internal_set_m_PreviousState(::UnityEngine::Experimental::Rendering::ProbeVolumeState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreviousState = value;
}
inline void UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::OnAfterDeserialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData*>::get(), "OnAfterDeserialize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::OnBeforeSerialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData*>::get(), "OnBeforeSerialize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::StoreAssetForState(::UnityEngine::Experimental::Rendering::ProbeVolumeState state,
                                                                                              ::UnityEngine::Experimental::Rendering::ProbeVolumeAsset* asset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData*>::get(), "StoreAssetForState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::ProbeVolumeState>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, asset);
}
inline void UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::InvalidateAllAssets() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData*>::get(), "InvalidateAllAssets",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset> UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::GetCurrentStateAsset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData*>::get(), "GetCurrentStateAsset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset>, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::QueueAssetLoading() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData*>::get(), "QueueAssetLoading",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::QueueAssetRemoval() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData*>::get(), "QueueAssetRemoval",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::OnEnable() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData*>::get(), "OnEnable",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::OnDisable() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData*>::get(), "OnDisable",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::OnDestroy() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData*>::get(), "OnDestroy",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::Update() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData*>::get(), "Update",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData* UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData*>());
}
inline void UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumePerSceneData::ProbeVolumePerSceneData() {}
