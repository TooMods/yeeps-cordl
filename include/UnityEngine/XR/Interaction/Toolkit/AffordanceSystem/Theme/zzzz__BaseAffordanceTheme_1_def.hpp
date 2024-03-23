#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseAffordanceTheme_1)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::XR::CoreUtils::Datums {
class AnimationCurveDatumProperty;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme {
template <typename T> class AffordanceThemeData_1;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme {
template <typename T> class BaseAffordanceTheme_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1);
// Type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme::BaseAffordanceTheme`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme::BaseAffordanceTheme`1<T>*
class CORDL_TYPE BaseAffordanceTheme_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_animationCurve))::UnityEngine::AnimationCurve* animationCurve;

  /// @brief Field m_List, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_List,
                      put = __cordl_internal_set_m_List))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1<T>*>* m_List;

  /// @brief Field m_StateAnimationCurve, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StateAnimationCurve,
                      put = __cordl_internal_set_m_StateAnimationCurve))::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty* m_StateAnimationCurve;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<T>*>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<T>*>*() noexcept;

  /// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void CopyFrom(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<T>* other);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<T>* other);

  /// @brief Method GetAffordanceThemeDataForIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1<T>* GetAffordanceThemeDataForIndex(uint8_t stateIndex);

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<T>* New_ctor();

  /// @brief Method SetAffordanceThemeDataList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetAffordanceThemeDataList(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1<T>*>* newList);

  /// @brief Method SetAnimationCurve, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetAnimationCurve(::UnityEngine::AnimationCurve* newAnimationCurve);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1<T>*>*& __cordl_internal_get_m_List();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1<T>*>*> const&
  __cordl_internal_get_m_List() const;

  constexpr ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*& __cordl_internal_get_m_StateAnimationCurve();

  constexpr ::cordl_internals::to_const_pointer<::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*> const& __cordl_internal_get_m_StateAnimationCurve() const;

  constexpr void __cordl_internal_set_m_List(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1<T>*>* value);

  constexpr void __cordl_internal_set_m_StateAnimationCurve(::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_animationCurve, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationCurve* get_animationCurve();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<T>*>"
  constexpr ::System::IEquatable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<T>*>*
  i___System__IEquatable_1___UnityEngine__XR__Interaction__Toolkit__AffordanceSystem__Theme__BaseAffordanceTheme_1_T___() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseAffordanceTheme_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseAffordanceTheme_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseAffordanceTheme_1(BaseAffordanceTheme_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseAffordanceTheme_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseAffordanceTheme_1(BaseAffordanceTheme_1 const&) = delete;

  /// @brief Field m_StateAnimationCurve, offset: 0x10, size: 0x8, def value: None
  ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty* ___m_StateAnimationCurve;

  /// @brief Field m_List, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1<T>*>* ___m_List;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme",
                                     "BaseAffordanceTheme`1");
