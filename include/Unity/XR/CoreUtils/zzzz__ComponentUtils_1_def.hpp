#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ComponentUtils_1)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
template <typename T> class ComponentUtils_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::XR::CoreUtils::ComponentUtils_1);
// Type: Unity.XR.CoreUtils::ComponentUtils`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::ComponentUtils`1<T>*
class CORDL_TYPE ComponentUtils_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field k_RetrievalList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_RetrievalList, put = setStaticF_k_RetrievalList))::System::Collections::Generic::List_1<T>* k_RetrievalList;

  /// @brief Method GetComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T GetComponent(::UnityEngine::GameObject* gameObject);

  /// @brief Method GetComponentInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T GetComponentInChildren(::UnityEngine::GameObject* gameObject);

  static inline ::System::Collections::Generic::List_1<T>* getStaticF_k_RetrievalList();

  static inline void setStaticF_k_RetrievalList(::System::Collections::Generic::List_1<T>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ComponentUtils_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ComponentUtils_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ComponentUtils_1(ComponentUtils_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ComponentUtils_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ComponentUtils_1(ComponentUtils_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::XR::CoreUtils
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::XR::CoreUtils::ComponentUtils_1, "Unity.XR.CoreUtils", "ComponentUtils`1");
