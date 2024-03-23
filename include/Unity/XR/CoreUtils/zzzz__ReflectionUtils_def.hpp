#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ReflectionUtils)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Reflection {
class Assembly;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class ReflectionUtils;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::ReflectionUtils);
// Type: Unity.XR.CoreUtils::ReflectionUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::ReflectionUtils*
class CORDL_TYPE ReflectionUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_Assemblies, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Assemblies, put = setStaticF_s_Assemblies))::ArrayW<::System::Reflection::Assembly*, ::Array<::System::Reflection::Assembly*>*> s_Assemblies;

  /// @brief Field s_AssemblyTypeMaps, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_AssemblyTypeMaps,
                             put = setStaticF_s_AssemblyTypeMaps))::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Type*>*>* s_AssemblyTypeMaps;

  /// @brief Field s_TypesPerAssembly, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_TypesPerAssembly,
                             put = setStaticF_s_TypesPerAssembly))::System::Collections::Generic::List_1<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>* s_TypesPerAssembly;

  /// @brief Method FindType, addr 0x287ded8, size 0x1d4, virtual false, abstract: false, final false
  static inline ::System::Type* FindType(::System::Func_2<::System::Type*, bool>* predicate);

  /// @brief Method FindTypeByFullName, addr 0x287e0ac, size 0x19c, virtual false, abstract: false, final false
  static inline ::System::Type* FindTypeByFullName(::StringW fullName);

  /// @brief Method FindTypeInAssemblyByFullName, addr 0x287e8a0, size 0x128, virtual false, abstract: false, final false
  static inline ::System::Type* FindTypeInAssemblyByFullName(::StringW assemblyName, ::StringW typeName);

  /// @brief Method FindTypesBatch, addr 0x287e248, size 0x284, virtual false, abstract: false, final false
  static inline void FindTypesBatch(::System::Collections::Generic::List_1<::System::Func_2<::System::Type*, bool>*>* predicates, ::System::Collections::Generic::List_1<::System::Type*>* resultList);

  /// @brief Method FindTypesByFullNameBatch, addr 0x287e4cc, size 0x3d4, virtual false, abstract: false, final false
  static inline void FindTypesByFullNameBatch(::System::Collections::Generic::List_1<::StringW>* typeNames, ::System::Collections::Generic::List_1<::System::Type*>* resultList);

  /// @brief Method ForEachAssembly, addr 0x287ddd0, size 0x108, virtual false, abstract: false, final false
  static inline void ForEachAssembly(::System::Action_1<::System::Reflection::Assembly*>* callback);

  /// @brief Method ForEachType, addr 0x28754e0, size 0x1ac, virtual false, abstract: false, final false
  static inline void ForEachType(::System::Action_1<::System::Type*>* callback);

  /// @brief Method GetCachedAssemblies, addr 0x287d744, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Reflection::Assembly*, ::Array<::System::Reflection::Assembly*>*> GetCachedAssemblies();

  /// @brief Method GetCachedAssemblyTypeMaps, addr 0x287d9e8, size 0x3e4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Type*>*>* GetCachedAssemblyTypeMaps();

  /// @brief Method GetCachedTypesPerAssembly, addr 0x287d7b0, size 0x238, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>* GetCachedTypesPerAssembly();

  /// @brief Method NicifyVariableName, addr 0x287e9c8, size 0x1dc, virtual false, abstract: false, final false
  static inline ::StringW NicifyVariableName(::StringW name);

  /// @brief Method PreWarmTypeCache, addr 0x287ddcc, size 0x4, virtual false, abstract: false, final false
  static inline void PreWarmTypeCache();

  static inline ::ArrayW<::System::Reflection::Assembly*, ::Array<::System::Reflection::Assembly*>*> getStaticF_s_Assemblies();

  static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Type*>*>* getStaticF_s_AssemblyTypeMaps();

  static inline ::System::Collections::Generic::List_1<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>* getStaticF_s_TypesPerAssembly();

  static inline void setStaticF_s_Assemblies(::ArrayW<::System::Reflection::Assembly*, ::Array<::System::Reflection::Assembly*>*> value);

  static inline void setStaticF_s_AssemblyTypeMaps(::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Type*>*>* value);

  static inline void setStaticF_s_TypesPerAssembly(::System::Collections::Generic::List_1<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionUtils(ReflectionUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionUtils(ReflectionUtils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::ReflectionUtils, 0x10>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils
NEED_NO_BOX(::Unity::XR::CoreUtils::ReflectionUtils);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::ReflectionUtils*, "Unity.XR.CoreUtils", "ReflectionUtils");
