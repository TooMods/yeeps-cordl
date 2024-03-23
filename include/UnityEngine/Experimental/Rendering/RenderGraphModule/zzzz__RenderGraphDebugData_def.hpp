#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraphDebugData)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct __RenderGraphDebugData__PassDebugData;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct __RenderGraphDebugData__ResourceDebugData;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class RenderGraphDebugData;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct __RenderGraphDebugData__PassDebugData;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct __RenderGraphDebugData__ResourceDebugData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData);
MARK_VAL_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__PassDebugData);
MARK_VAL_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__ResourceDebugData);
// Type: ::PassDebugData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 42, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: ::RenderGraphDebugData::PassDebugData
struct CORDL_TYPE __RenderGraphDebugData__PassDebugData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RenderGraphDebugData__PassDebugData();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "resourceReadLists", ty:
  // "::ArrayW<::System::Collections::Generic::List_1<int32_t>*,::Array<::System::Collections::Generic::List_1<int32_t>*>*>", modifiers: "", def_value: None }, CppParam { name: "resourceWriteLists",
  // ty: "::ArrayW<::System::Collections::Generic::List_1<int32_t>*,::Array<::System::Collections::Generic::List_1<int32_t>*>*>", modifiers: "", def_value: None }, CppParam { name: "culled", ty:
  // "bool", modifiers: "", def_value: None }, CppParam { name: "generateDebugData", ty: "bool", modifiers: "", def_value: None }]
  constexpr __RenderGraphDebugData__PassDebugData(::StringW name,
                                                  ::ArrayW<::System::Collections::Generic::List_1<int32_t>*, ::Array<::System::Collections::Generic::List_1<int32_t>*>*> resourceReadLists,
                                                  ::ArrayW<::System::Collections::Generic::List_1<int32_t>*, ::Array<::System::Collections::Generic::List_1<int32_t>*>*> resourceWriteLists,
                                                  bool culled, bool generateDebugData) noexcept;

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field resourceReadLists, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::List_1<int32_t>*, ::Array<::System::Collections::Generic::List_1<int32_t>*>*> resourceReadLists;

  /// @brief Field resourceWriteLists, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::List_1<int32_t>*, ::Array<::System::Collections::Generic::List_1<int32_t>*>*> resourceWriteLists;

  /// @brief Field culled, offset: 0x18, size: 0x1, def value: None
  bool culled;

  /// @brief Field generateDebugData, offset: 0x19, size: 0x1, def value: None
  bool generateDebugData;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__PassDebugData, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__PassDebugData, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__PassDebugData, resourceReadLists) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__PassDebugData, resourceWriteLists) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__PassDebugData, culled) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__PassDebugData, generateDebugData) == 0x19, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
// Type: ::ResourceDebugData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: ::RenderGraphDebugData::ResourceDebugData
struct CORDL_TYPE __RenderGraphDebugData__ResourceDebugData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RenderGraphDebugData__ResourceDebugData();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "imported", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "creationPassIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "releasePassIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "consumerList", ty:
  // "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: None }, CppParam { name: "producerList", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "",
  // def_value: None }]
  constexpr __RenderGraphDebugData__ResourceDebugData(::StringW name, bool imported, int32_t creationPassIndex, int32_t releasePassIndex, ::System::Collections::Generic::List_1<int32_t>* consumerList,
                                                      ::System::Collections::Generic::List_1<int32_t>* producerList) noexcept;

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field imported, offset: 0x8, size: 0x1, def value: None
  bool imported;

  /// @brief Field creationPassIndex, offset: 0xc, size: 0x4, def value: None
  int32_t creationPassIndex;

  /// @brief Field releasePassIndex, offset: 0x10, size: 0x4, def value: None
  int32_t releasePassIndex;

  /// @brief Field consumerList, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* consumerList;

  /// @brief Field producerList, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* producerList;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__ResourceDebugData, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__ResourceDebugData, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__ResourceDebugData, imported) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__ResourceDebugData, creationPassIndex) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__ResourceDebugData, releasePassIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__ResourceDebugData, consumerList) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__ResourceDebugData, producerList) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule::RenderGraphDebugData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: ::UnityEngine.Experimental.Rendering.RenderGraphModule::RenderGraphDebugData*
class CORDL_TYPE RenderGraphDebugData : public ::System::Object {
public:
  // Declarations
  using PassDebugData = ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__PassDebugData;

  using ResourceDebugData = ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__ResourceDebugData;

  /// @brief Field passList, offset 0x10, size 0x8
  __declspec(
      property(get = __cordl_internal_get_passList,
               put = __cordl_internal_set_passList))::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__PassDebugData>* passList;

  /// @brief Field resourceLists, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_resourceLists, put = __cordl_internal_set_resourceLists))::ArrayW<
      ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__ResourceDebugData>*,
      ::Array<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__ResourceDebugData>*>*> resourceLists;

  /// @brief Method Clear, addr 0x23cb9d0, size 0x198, virtual false, abstract: false, final false
  inline void Clear();

  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__PassDebugData>*& __cordl_internal_get_passList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__PassDebugData>*> const&
  __cordl_internal_get_passList() const;

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__ResourceDebugData>*,
                     ::Array<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__ResourceDebugData>*>*> const&
  __cordl_internal_get_resourceLists() const;

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__ResourceDebugData>*,
                     ::Array<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__ResourceDebugData>*>*>&
  __cordl_internal_get_resourceLists();

  constexpr void __cordl_internal_set_passList(::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__PassDebugData>* value);

  constexpr void
  __cordl_internal_set_resourceLists(::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__ResourceDebugData>*,
                                              ::Array<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__ResourceDebugData>*>*>
                                         value);

  /// @brief Method .ctor, addr 0x23cbb68, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphDebugData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphDebugData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphDebugData(RenderGraphDebugData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphDebugData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphDebugData(RenderGraphDebugData const&) = delete;

  /// @brief Field passList, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__PassDebugData>* ___passList;

  /// @brief Field resourceLists, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__ResourceDebugData>*,
           ::Array<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__ResourceDebugData>*>*>
      ___resourceLists;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData, ___passList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData, ___resourceLists) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData*, "UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderGraphDebugData");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__PassDebugData, "UnityEngine.Experimental.Rendering.RenderGraphModule",
                       "RenderGraphDebugData/PassDebugData");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__ResourceDebugData, "UnityEngine.Experimental.Rendering.RenderGraphModule",
                       "RenderGraphDebugData/ResourceDebugData");
