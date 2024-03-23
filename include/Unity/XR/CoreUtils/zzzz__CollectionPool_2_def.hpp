#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CollectionPool_2)
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
template <typename TCollection, typename TValue> class CollectionPool_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::XR::CoreUtils::CollectionPool_2);
// Type: Unity.XR.CoreUtils::CollectionPool`2
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// cpp template
template <typename TCollection, typename TValue>
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::CollectionPool`2<TCollection,TValue>*
class CORDL_TYPE CollectionPool_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field k_CollectionQueue, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_CollectionQueue, put = setStaticF_k_CollectionQueue))::System::Collections::Generic::Queue_1<TCollection>* k_CollectionQueue;

  /// @brief Method GetCollection, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline TCollection GetCollection();

  /// @brief Method RecycleCollection, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void RecycleCollection(TCollection collection);

  static inline ::System::Collections::Generic::Queue_1<TCollection>* getStaticF_k_CollectionQueue();

  static inline void setStaticF_k_CollectionQueue(::System::Collections::Generic::Queue_1<TCollection>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionPool_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CollectionPool_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CollectionPool_2(CollectionPool_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CollectionPool_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CollectionPool_2(CollectionPool_2 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::XR::CoreUtils
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::XR::CoreUtils::CollectionPool_2, "Unity.XR.CoreUtils", "CollectionPool`2");
