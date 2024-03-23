#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OnDestroyNotifier)
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class OnDestroyNotifier;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::OnDestroyNotifier);
// Type: Unity.XR.CoreUtils::OnDestroyNotifier
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::OnDestroyNotifier*
class CORDL_TYPE OnDestroyNotifier : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_Destroyed, put = set_Destroyed))::System::Action_1<::UnityW<::Unity::XR::CoreUtils::OnDestroyNotifier>>* Destroyed;

  /// @brief Field <Destroyed>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Destroyed_k__BackingField,
                      put = __cordl_internal_set__Destroyed_k__BackingField))::System::Action_1<::UnityW<::Unity::XR::CoreUtils::OnDestroyNotifier>>* _Destroyed_k__BackingField;

  static inline ::Unity::XR::CoreUtils::OnDestroyNotifier* New_ctor();

  /// @brief Method OnDestroy, addr 0x287d71c, size 0x20, virtual false, abstract: false, final false
  inline void OnDestroy();

  constexpr ::System::Action_1<::UnityW<::Unity::XR::CoreUtils::OnDestroyNotifier>>*& __cordl_internal_get__Destroyed_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::Unity::XR::CoreUtils::OnDestroyNotifier>>*> const& __cordl_internal_get__Destroyed_k__BackingField() const;

  constexpr void __cordl_internal_set__Destroyed_k__BackingField(::System::Action_1<::UnityW<::Unity::XR::CoreUtils::OnDestroyNotifier>>* value);

  /// @brief Method .ctor, addr 0x287d73c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Destroyed, addr 0x287d70c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_1<::UnityW<::Unity::XR::CoreUtils::OnDestroyNotifier>>* get_Destroyed();

  /// @brief Method set_Destroyed, addr 0x287d714, size 0x8, virtual false, abstract: false, final false
  inline void set_Destroyed(::System::Action_1<::UnityW<::Unity::XR::CoreUtils::OnDestroyNotifier>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OnDestroyNotifier();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OnDestroyNotifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OnDestroyNotifier(OnDestroyNotifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OnDestroyNotifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OnDestroyNotifier(OnDestroyNotifier const&) = delete;

  /// @brief Field <Destroyed>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::Unity::XR::CoreUtils::OnDestroyNotifier>>* ____Destroyed_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::OnDestroyNotifier, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::XR::CoreUtils::OnDestroyNotifier, ____Destroyed_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Unity::XR::CoreUtils
NEED_NO_BOX(::Unity::XR::CoreUtils::OnDestroyNotifier);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::OnDestroyNotifier*, "Unity.XR.CoreUtils", "OnDestroyNotifier");
