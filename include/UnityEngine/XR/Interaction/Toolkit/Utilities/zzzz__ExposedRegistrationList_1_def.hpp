#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__SmallRegistrationList_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExposedRegistrationList_1)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::XR::Interaction::Toolkit {
template <typename T> class IXRFilterList_1;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
template <typename T> class ExposedRegistrationList_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1);
// Type: UnityEngine.XR.Interaction.Toolkit.Utilities::ExposedRegistrationList`1
// SizeInfo { instance_size: 48, native_size: 41, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Utilities::ExposedRegistrationList`1<T>*
class CORDL_TYPE ExposedRegistrationList_1 : public ::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<T> {
public:
  // Declarations
  __declspec(property(get = get_count)) int32_t count;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXRFilterList_1<T>"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::IXRFilterList_1<T>*() noexcept;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Add(T item);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method GetAll, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void GetAll(::System::Collections::Generic::List_1<T>* results);

  /// @brief Method GetAt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T GetAt(int32_t index);

  /// @brief Method MoveTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveTo(T item, int32_t newIndex);

  static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>* New_ctor();

  /// @brief Method RegisterReferences, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> inline void RegisterReferences(::System::Collections::Generic::List_1<TObject>* references, ::UnityEngine::Object* context);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Remove(T item);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_count();

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXRFilterList_1<T>"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRFilterList_1<T>* i___UnityEngine__XR__Interaction__Toolkit__IXRFilterList_1_T_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExposedRegistrationList_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExposedRegistrationList_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExposedRegistrationList_1(ExposedRegistrationList_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExposedRegistrationList_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExposedRegistrationList_1(ExposedRegistrationList_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1, "UnityEngine.XR.Interaction.Toolkit.Utilities", "ExposedRegistrationList`1");
