#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ReflectionUtils)
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
class Type;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class ReflectionUtils;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::ReflectionUtils);
// Type: UnityEngine.XR.Interaction.Toolkit.Utilities::ReflectionUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Utilities::ReflectionUtils*
class CORDL_TYPE ReflectionUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_Assemblies, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Assemblies, put = setStaticF_s_Assemblies))::ArrayW<::System::Reflection::Assembly*, ::Array<::System::Reflection::Assembly*>*> s_Assemblies;

  /// @brief Field s_TypesPerAssembly, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_TypesPerAssembly,
                             put = setStaticF_s_TypesPerAssembly))::System::Collections::Generic::List_1<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>* s_TypesPerAssembly;

  /// @brief Method ForEachAssembly, addr 0x301fb20, size 0x108, virtual false, abstract: false, final false
  static inline void ForEachAssembly(::System::Action_1<::System::Reflection::Assembly*>* callback);

  /// @brief Method GetCachedAssemblies, addr 0x301faa8, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Reflection::Assembly*, ::Array<::System::Reflection::Assembly*>*> GetCachedAssemblies();

  static inline ::ArrayW<::System::Reflection::Assembly*, ::Array<::System::Reflection::Assembly*>*> getStaticF_s_Assemblies();

  static inline ::System::Collections::Generic::List_1<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>* getStaticF_s_TypesPerAssembly();

  static inline void setStaticF_s_Assemblies(::ArrayW<::System::Reflection::Assembly*, ::Array<::System::Reflection::Assembly*>*> value);

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
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Utilities::ReflectionUtils, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Utilities
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Utilities::ReflectionUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Utilities::ReflectionUtils*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "ReflectionUtils");
