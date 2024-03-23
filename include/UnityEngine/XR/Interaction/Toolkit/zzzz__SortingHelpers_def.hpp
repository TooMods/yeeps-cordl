#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SortingHelpers)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractor;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class SortingHelpers;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::SortingHelpers);
// Type: UnityEngine.XR.Interaction.Toolkit::SortingHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::SortingHelpers*
class CORDL_TYPE SortingHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_InteractableDistanceComparison, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_InteractableDistanceComparison,
                             put = setStaticF_s_InteractableDistanceComparison))::System::Comparison_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* s_InteractableDistanceComparison;

  /// @brief Field s_InteractableDistanceSqrMap, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF_s_InteractableDistanceSqrMap,
      put = setStaticF_s_InteractableDistanceSqrMap))::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, float_t>* s_InteractableDistanceSqrMap;

  /// @brief Method InteractableDistanceComparison, addr 0x301e100, size 0xcc, virtual false, abstract: false, final false
  static inline int32_t InteractableDistanceComparison(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* x, ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* y);

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Sort(::System::Collections::Generic::IList_1<T>* hits, ::System::Collections::Generic::IComparer_1<T>* comparer);

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Sort(::System::Collections::Generic::IList_1<T>* hits, ::System::Collections::Generic::IComparer_1<T>* comparer, int32_t count);

  /// @brief Method SortByDistanceToInteractor, addr 0x301dc40, size 0x4c0, virtual false, abstract: false, final false
  static inline void SortByDistanceToInteractor(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor,
                                                ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* unsortedTargets,
                                                ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* results);

  static inline ::System::Comparison_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* getStaticF_s_InteractableDistanceComparison();

  static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, float_t>* getStaticF_s_InteractableDistanceSqrMap();

  static inline void setStaticF_s_InteractableDistanceComparison(::System::Comparison_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* value);

  static inline void setStaticF_s_InteractableDistanceSqrMap(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, float_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortingHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SortingHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortingHelpers(SortingHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortingHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortingHelpers(SortingHelpers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::SortingHelpers, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::SortingHelpers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::SortingHelpers*, "UnityEngine.XR.Interaction.Toolkit", "SortingHelpers");
