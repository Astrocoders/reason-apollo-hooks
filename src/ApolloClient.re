// export { default as Observable } from 'zen-observable';
// export { isReference, makeReference } from './utilities/graphql/storeUtils.js';
// export { ApolloLink } from './link/core/ApolloLink.js';
// export { execute } from './link/core/execute.js';
// export { ApolloError, isApolloError } from './errors/ApolloError.js';
// export { NetworkStatus } from './core/networkStatus.js';
// export { FetchType } from './core/types.js';
// export { ObservableQuery } from './core/ObservableQuery.js';
// export { serializeFetchParameter } from './link/http/serializeFetchParameter.js';
// export { selectURI } from './link/http/selectURI.js';
// export { throwServerError } from './link/utils/throwServerError.js';
// export { parseAndCheckHttpResponse } from './link/http/parseAndCheckHttpResponse.js';
// export { checkFetcher } from './link/http/checkFetcher.js';
// export { fallbackHttpConfig, selectHttpOptionsAndBody } from './link/http/selectHttpOptionsAndBody.js';
// export { createSignalIfSupported } from './link/http/createSignalIfSupported.js';
// export { fromError } from './link/utils/fromError.js';
// export { createHttpLink } from './link/http/createHttpLink.js';
// export { HttpLink } from './link/http/HttpLink.js';
// export { ApolloCache } from './cache/core/cache.js';
// export { Cache } from './cache/core/types/Cache.js';
// export { MissingFieldError } from './cache/core/types/common.js';
// export { defaultDataIdFromObject } from './cache/inmemory/policies.js';
// export { InMemoryCache } from './cache/inmemory/inMemoryCache.js';
// export { empty } from './link/core/empty.js';
// export { from } from './link/core/from.js';
// export { split } from './link/core/split.js';
// export { concat } from './link/core/concat.js';
// export { toPromise } from './link/utils/toPromise.js';
// export { fromPromise } from './link/utils/fromPromise.js';
// export { disableExperimentalFragmentVariables, disableFragmentWarnings, enableExperimentalFragmentVariables, resetCaches } from './core/index.js';
// export { getApolloContext, resetApolloContext } from './react/context/ApolloContext.js';
// export { ApolloProvider } from './react/context/ApolloProvider.js';
// export { ApolloConsumer } from './react/context/ApolloConsumer.js';
// export { DocumentType, operationName, parser } from './react/parser/parser.js';
// export { useLazyQuery } from './react/hooks/useLazyQuery.js';
// export { useMutation } from './react/hooks/useMutation.js';
// export { useApolloClient } from './react/hooks/useApolloClient.js';
// export { RenderPromises } from './react/ssr/RenderPromises.js';

module ApolloClient = ApolloClient__ApolloClient;

module Extend = {
  module Query = ApolloClient__React_UseQuery.Extend;
  module Subscription = ApolloClient__React_UseSubscription.Extend;
};

let useQuery = ApolloClient__React_UseQuery.useQuery;
let useSubscription = ApolloClient__React_UseSubscription.useSubscription;
