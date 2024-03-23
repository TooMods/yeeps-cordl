#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnityObjectUtils)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class UnityObjectUtils;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::UnityObjectUtils);
// Type: Unity.XR.CoreUtils::UnityObjectUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::UnityObjectUtils*
class CORDL_TYPE UnityObjectUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertUnityObjectToType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T ConvertUnityObjectToType(::UnityEngine::Object* objectIn);

  /// @brief Method Destroy, addr 0x287f6d0, size 0x70, virtual false, abstract: false, final false
  static inline void Destroy(::UnityEngine::Object* obj, bool withUndo);

  /// @brief Method RemoveDestroyedKeys, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue> static inline void RemoveDestroyedKeys(::System::Collections::Generic::Dictionary_2<TKey, TValue>* dictionary);

  /// @brief Method RemoveDestroyedObjects, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void RemoveDestroyedObjects(::System::Collections::Generic::List_1<T>* list);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityObjectUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityObjectUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityObjectUtils(UnityObjectUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityObjectUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityObjectUtils(UnityObjectUtils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::UnityObjectUtils, 0x10>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils
NEED_NO_BOX(::Unity::XR::CoreUtils::UnityObjectUtils);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::UnityObjectUtils*, "Unity.XR.CoreUtils", "UnityObjectUtils");
