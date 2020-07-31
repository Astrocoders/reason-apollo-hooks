open ApolloHooks;

module PersonsOlderThanQuery = [%graphql
  {|
  query getPersonsOlderThan($age: Int!) {
    persons(where: { age: { _gt: $age } } ) {
      id
    }
  }
|}
];

[@react.component]
let make = (~age) => {
  let (simple, _full) =
    useQuery(
      ~variables=PersonsOlderThanQuery.makeVariables(~age, ()),
      PersonsOlderThanQuery.definition,
    );

  <div>
    {switch (simple) {
     | Loading => <p> {React.string("Loading...")} </p>
     | Data(data) =>
       <h3>
         {"There are "
          ++ (data##persons->Belt.Array.length |> string_of_int)
          ++ " people older than "
          ++ string_of_int(age)
          |> React.string}
       </h3>
     | NoData
     | Error(_) => <p> {React.string("Error")} </p>
     }}
  </div>;
};
