#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__WorldInteractionController_def.hpp"
#include "GlobalNamespace/zzzz__ButtonController_def.hpp"
#include "GlobalNamespace/zzzz__MapObject_def.hpp"
#include "GlobalNamespace/zzzz__MapSyncData_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WorldInteractionController.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WorldInteractionController::*)()>(&::GlobalNamespace::WorldInteractionController::Start)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xf28e3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldInteractionController.TrySaveActiveWorld
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WorldInteractionController::*)()>(
    &::GlobalNamespace::WorldInteractionController::TrySaveActiveWorld)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xf29060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(),
                                                                               "TrySaveActiveWorld", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldInteractionController.ClearSavedWorld
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WorldInteractionController::*)()>(
    &::GlobalNamespace::WorldInteractionController::ClearSavedWorld)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xf2937c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(),
                                                                               "ClearSavedWorld", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldInteractionController.TryLoadWorld
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WorldInteractionController::*)()>(
    &::GlobalNamespace::WorldInteractionController::TryLoadWorld)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xf29498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(),
                                                                               "TryLoadWorld", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldInteractionController.LoadWorld
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WorldInteractionController::*)(::GlobalNamespace::MapSyncData*, ::StringW)>(
    &::GlobalNamespace::WorldInteractionController::LoadWorld)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xf295fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(), "LoadWorld", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MapSyncData*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldInteractionController.ShiftMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WorldInteractionController::*)(::GlobalNamespace::__MapObject__Facing, bool)>(
    &::GlobalNamespace::WorldInteractionController::ShiftMap)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xf29750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(), "ShiftMap", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MapObject__Facing>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldInteractionController.DisplayStatusError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WorldInteractionController::*)(::StringW)>(
    &::GlobalNamespace::WorldInteractionController::DisplayStatusError)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xf29264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(), "DisplayStatusError",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldInteractionController.DisplayStatusSuccess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WorldInteractionController::*)(::StringW)>(
    &::GlobalNamespace::WorldInteractionController::DisplayStatusSuccess)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xf292f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(), "DisplayStatusSuccess",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldInteractionController.OnSaveWorldButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WorldInteractionController::*)()>(
    &::GlobalNamespace::WorldInteractionController::OnSaveWorldButtonPressed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xf298c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(),
                                                                               "OnSaveWorldButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldInteractionController.OnLoadWorldButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WorldInteractionController::*)()>(
    &::GlobalNamespace::WorldInteractionController::OnLoadWorldButtonPressed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xf298c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(),
                                                                               "OnLoadWorldButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldInteractionController.OnClearSaveButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WorldInteractionController::*)()>(
    &::GlobalNamespace::WorldInteractionController::OnClearSaveButtonPressed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xf298c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(),
                                                                               "OnClearSaveButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldInteractionController.OnLoadEmptyButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WorldInteractionController::*)()>(
    &::GlobalNamespace::WorldInteractionController::OnLoadEmptyButtonPressed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xf298cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(),
                                                                               "OnLoadEmptyButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldInteractionController.OnSwitchToPlayButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WorldInteractionController::*)()>(
    &::GlobalNamespace::WorldInteractionController::OnSwitchToPlayButtonPressed)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xf298d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(),
                                                                               "OnSwitchToPlayButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldInteractionController.OnSwitchToCreativeButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WorldInteractionController::*)()>(
    &::GlobalNamespace::WorldInteractionController::OnSwitchToCreativeButtonPressed)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xf29964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(), "OnSwitchToCreativeButtonPressed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldInteractionController.OnShiftMapXPositiveButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WorldInteractionController::*)()>(
    &::GlobalNamespace::WorldInteractionController::OnShiftMapXPositiveButtonPressed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xf299f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(), "OnShiftMapXPositiveButtonPressed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldInteractionController.OnShiftMapXNegativeButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WorldInteractionController::*)()>(
    &::GlobalNamespace::WorldInteractionController::OnShiftMapXNegativeButtonPressed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xf299fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(), "OnShiftMapXNegativeButtonPressed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldInteractionController.OnShiftMapZPositiveButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WorldInteractionController::*)()>(
    &::GlobalNamespace::WorldInteractionController::OnShiftMapZPositiveButtonPressed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xf29a08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(), "OnShiftMapZPositiveButtonPressed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldInteractionController.OnShiftMapZNegativeButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WorldInteractionController::*)()>(
    &::GlobalNamespace::WorldInteractionController::OnShiftMapZNegativeButtonPressed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xf29a14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(), "OnShiftMapZNegativeButtonPressed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldInteractionController.OnShiftMapYPositiveButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WorldInteractionController::*)()>(
    &::GlobalNamespace::WorldInteractionController::OnShiftMapYPositiveButtonPressed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xf29a20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(), "OnShiftMapYPositiveButtonPressed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldInteractionController.OnShiftMapYNegativeButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WorldInteractionController::*)()>(
    &::GlobalNamespace::WorldInteractionController::OnShiftMapYNegativeButtonPressed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xf29a2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(), "OnShiftMapYNegativeButtonPressed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldInteractionController.OnDestructiveShiftMapYNegativeButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WorldInteractionController::*)()>(
    &::GlobalNamespace::WorldInteractionController::OnDestructiveShiftMapYNegativeButtonPressed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xf29a38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(),
                                                 "OnDestructiveShiftMapYNegativeButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldInteractionController.OnIsCreativeModeUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WorldInteractionController::*)(bool)>(
    &::GlobalNamespace::WorldInteractionController::OnIsCreativeModeUpdated)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xf28f88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(), "OnIsCreativeModeUpdated",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldInteractionController.OnToggleBuildingPlansActiveButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WorldInteractionController::*)()>(
    &::GlobalNamespace::WorldInteractionController::OnToggleBuildingPlansActiveButtonPressed)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xf29a44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(),
                                                 "OnToggleBuildingPlansActiveButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldInteractionController.OnUnlockAllPatternsButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WorldInteractionController::*)()>(
    &::GlobalNamespace::WorldInteractionController::OnUnlockAllPatternsButtonPressed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xf29adc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(), "OnUnlockAllPatternsButtonPressed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldInteractionController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WorldInteractionController::*)()>(&::GlobalNamespace::WorldInteractionController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf29ae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::WorldInteractionController::__cordl_internal_get_buildingPlans() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buildingPlans;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::WorldInteractionController::__cordl_internal_get_buildingPlans() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buildingPlans;
}
constexpr void GlobalNamespace::WorldInteractionController::__cordl_internal_set_buildingPlans(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___buildingPlans)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ButtonController>& GlobalNamespace::WorldInteractionController::__cordl_internal_get_switchToPlayButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___switchToPlayButton;
}
constexpr ::UnityW<::GlobalNamespace::ButtonController> const& GlobalNamespace::WorldInteractionController::__cordl_internal_get_switchToPlayButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___switchToPlayButton;
}
constexpr void GlobalNamespace::WorldInteractionController::__cordl_internal_set_switchToPlayButton(::UnityW<::GlobalNamespace::ButtonController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___switchToPlayButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ButtonController>& GlobalNamespace::WorldInteractionController::__cordl_internal_get_switchToCreativeButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___switchToCreativeButton;
}
constexpr ::UnityW<::GlobalNamespace::ButtonController> const& GlobalNamespace::WorldInteractionController::__cordl_internal_get_switchToCreativeButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___switchToCreativeButton;
}
constexpr void GlobalNamespace::WorldInteractionController::__cordl_internal_set_switchToCreativeButton(::UnityW<::GlobalNamespace::ButtonController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___switchToCreativeButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::WorldInteractionController::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::WorldInteractionController::TrySaveActiveWorld() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(),
                                                                             "TrySaveActiveWorld", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::WorldInteractionController::ClearSavedWorld() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(),
                                                                             "ClearSavedWorld", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::WorldInteractionController::TryLoadWorld() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(),
                                                                             "TryLoadWorld", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::WorldInteractionController::LoadWorld(::GlobalNamespace::MapSyncData* mapSyncData, ::StringW saveKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(), "LoadWorld", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MapSyncData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mapSyncData, saveKey);
}
/// @param isDestructive: bool (default: false)
inline void GlobalNamespace::WorldInteractionController::ShiftMap(::GlobalNamespace::__MapObject__Facing shiftDirection, bool isDestructive) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(), "ShiftMap", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MapObject__Facing>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shiftDirection, isDestructive);
}
inline void GlobalNamespace::WorldInteractionController::DisplayStatusError(::StringW errorMessage) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(), "DisplayStatusError",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errorMessage);
}
inline void GlobalNamespace::WorldInteractionController::DisplayStatusSuccess(::StringW successMessage) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(), "DisplayStatusSuccess",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, successMessage);
}
inline void GlobalNamespace::WorldInteractionController::OnSaveWorldButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(),
                                                                             "OnSaveWorldButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::WorldInteractionController::OnLoadWorldButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(),
                                                                             "OnLoadWorldButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::WorldInteractionController::OnClearSaveButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(),
                                                                             "OnClearSaveButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::WorldInteractionController::OnLoadEmptyButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(),
                                                                             "OnLoadEmptyButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::WorldInteractionController::OnSwitchToPlayButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(),
                                                                             "OnSwitchToPlayButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::WorldInteractionController::OnSwitchToCreativeButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(),
                                                                             "OnSwitchToCreativeButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::WorldInteractionController::OnShiftMapXPositiveButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(),
                                                                             "OnShiftMapXPositiveButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::WorldInteractionController::OnShiftMapXNegativeButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(),
                                                                             "OnShiftMapXNegativeButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::WorldInteractionController::OnShiftMapZPositiveButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(),
                                                                             "OnShiftMapZPositiveButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::WorldInteractionController::OnShiftMapZNegativeButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(),
                                                                             "OnShiftMapZNegativeButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::WorldInteractionController::OnShiftMapYPositiveButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(),
                                                                             "OnShiftMapYPositiveButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::WorldInteractionController::OnShiftMapYNegativeButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(),
                                                                             "OnShiftMapYNegativeButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::WorldInteractionController::OnDestructiveShiftMapYNegativeButtonPressed() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(),
                                               "OnDestructiveShiftMapYNegativeButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::WorldInteractionController::OnIsCreativeModeUpdated(bool newIsCreativeMode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(), "OnIsCreativeModeUpdated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIsCreativeMode);
}
inline void GlobalNamespace::WorldInteractionController::OnToggleBuildingPlansActiveButtonPressed() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(),
                                               "OnToggleBuildingPlansActiveButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::WorldInteractionController::OnUnlockAllPatternsButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(),
                                                                             "OnUnlockAllPatternsButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::WorldInteractionController* GlobalNamespace::WorldInteractionController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::WorldInteractionController*>());
}
inline void GlobalNamespace::WorldInteractionController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WorldInteractionController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WorldInteractionController::WorldInteractionController() {}
